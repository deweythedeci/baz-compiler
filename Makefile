# compiler settings
CC = g++
CFLAGS = -Wall
LDFLAGS = -static -lantlr4-runtime

# directory paths
SRCDIR = src
INCDIR = include
BUILDDIR = build
BINDIR = bin
LIBDIR = lib
ANTLRDIR = antlr

# grammar names
LEXER = $(ANTLRDIR)/BazLexer.g4
PARSER = $(ANTLRDIR)/Baz.g4
PARSETREE = $(addprefix $(ANTLRDIR)/antlr/, BazLexer.h BazParser.h BazVisitor.h BazLexer.cpp  BazParser.cpp  BazVisitor.cpp)

# executable name
EXECNAME = bazc

# source and object files
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

# make rules
all: $(BINDIR)/$(EXECNAME)

$(PARSETREE): $(LEXER) $(PARSER)
	antlr4 -Dlanguage=Cpp -visitor -o $(ANTLRDIR) -package parse -no-listener $(PARSER)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -I$(INCDIR) -I$(INCDIR)/antlr4-runtime/ -c $< -o $@

$(BINDIR)/$(EXECNAME): $(OBJS)
	$(CC) $(CFLAGS) -L$(LIBDIR) $(OBJS) $(LDFLAGS) -o $@

# clean rule
clean:
	rm -rf $(BUILDDIR)/*.o $(BINDIR)/$(EXECNAME)
	rm -rf $(ANTLRDIR)/antlr