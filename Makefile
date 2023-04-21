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

# grammar files
GRAMMARLEX = $(ANTLRDIR)/BazLexer.g4
GRAMMAR = $(ANTLRDIR)/Baz.g4

# generated parser
PARSERH = BazLexer.h BazParser.h BazVisitor.h
PARSERS = BazLexer.cpp BazParser.cpp
PARSER = $(INCDIR)/parse/$(PARSERH) $(SRCDIR)/parse/$(PARSERS)

# executable name
EXECNAME = bazc

# source and object files
SRCS = $(wildcard $(SRCDIR)/*.cpp $(SRCDIR)/*/*.cpp)
SRCBASE = $(notdir $(shell find $(SRCDIR) -name '*.cpp'))
OBJS = $(addprefix $(BUILDDIR)/, $(patsubst %.cpp, %.o, $(SRCBASE)))

# make rules
all: $(BINDIR)/$(EXECNAME)

# build parser code
$(PARSER): $(GRAMMARLEX) $(GRAMMAR)
	antlr4 -Dlanguage=Cpp -visitor -o $(ANTLRDIR) -package parse -no-listener $(GRAMMAR)
	$(foreach file,$(PARSERH),cp $(ANTLRDIR)/antlr/$(file) $(INCDIR)/parse/;)
	$(foreach file,$(PARSERS),cp $(ANTLRDIR)/antlr/$(file) $(SRCDIR)/parse/;)

# build object files
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I$(INCDIR) -I$(INCDIR)/antlr4-runtime/ -I$(INCDIR)/parse/ -c $< -o $@

# build executable
$(BINDIR)/$(EXECNAME): $(OBJS)
	echo $(OBJS)
	$(CC) $(CFLAGS) -L$(LIBDIR) $(OBJS) $(LDFLAGS) -o $@

# clean rule
clean:
	rm -rf $(BUILDDIR)/*.o $(BINDIR)/$(EXECNAME)
	rm -rf $(ANTLRDIR)/antlr