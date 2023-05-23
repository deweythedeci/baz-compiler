# compiler settings
CC = g++
CFLAGS = -I $(INCDIR)/antlr4-runtime/ -I $(INCDIR)/parse/
LDFLAGS = -static -l antlr4-runtime

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
PARSER = # dummy target

# executable name
EXECNAME = bazc

# source and object files
SRCS = $(wildcard $(SRCDIR)/*/*.cpp)
OBJS = $(addprefix $(BUILDDIR)/, $(patsubst %.cpp, %.o, $(notdir $(SRCS))))

# make rules
all: $(BINDIR)/$(EXECNAME)

# build parser code
PARSER: $(GRAMMARLEX) $(GRAMMAR)
	antlr4 -Dlanguage=Cpp -visitor -o $(ANTLRDIR) -package parse -no-listener $(GRAMMAR)
	$(foreach file,$(PARSERH),cp $(ANTLRDIR)/antlr/$(file) $(INCDIR)/parse/;)
	$(foreach file,$(PARSERS),cp $(ANTLRDIR)/antlr/$(file) $(SRCDIR)/parse/;)
	rm -r $(ANTLRDIR)/antlr/

# build object files
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I $(INCDIR) -c FIXME -o $@

# build executable
$(BINDIR)/$(EXECNAME): $(OBJS)
	$(CC) -L $(LIBDIR) $(OBJS) $(LDFLAGS) -o $@

# clean rule
clean:
	rm -rf $(BUILDDIR)/*.o $(BINDIR)/$(EXECNAME)