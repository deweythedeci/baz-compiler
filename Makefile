# compiler settings
CC = g++
CFLAGS = -Wall -std=c++11

# directory paths
SRCDIR = src
INCDIR = include
BUILDDIR = build
BINDIR = bin
ANTLRDIR = antlr
ANTLRGEN = gen

# grammar names
GRAMMARS = $(addprefix $(ANTLRDIR)/, Baz.g4 BazLexer.g4 BazParser.g4)
PARSERS =  $(addprefix $(ANTLRDIR)/$(ANTLRGEN)/, BazLexer.h BazParser.h BazVisitor.h BazLexer.cpp  BazParser.cpp  BazVisitor.cpp)

# executable name
EXECNAME = bazc

# source and object files
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

# make rules
$(PARSERS): $(GRAMMARS)
	antlr4 -Dlanguage=Cpp -visitor -o $(ANTLRDIR)/$(ANTLRGEN) -package parse $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(BINDIR)/$(EXECNAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# clean rule
clean:
	rm -rf $(BUILDDIR)/*.o $(BINDIR)/$(EXECNAME)