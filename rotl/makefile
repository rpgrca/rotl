
SRCDIR    = src
OBJDIR    = obj
INCDIR    = include
BINDIR    = bin

SRCFILES  = $(wildcard $(SRCDIR)/*.cpp)
OBJFILES  = $(notdir $(basename $(SRCFILES)))
OBJFILES := $(addsuffix .o,$(addprefix $(OBJDIR)/,$(OBJFILES)))
DEPFILE   = makefile.dep
GCC       = g++
ifdef USE_CURSES
LFLAGS    = -lncurses
else
LFLAGS    =
endif
CXXFLAGS  = -g -ggdb3 -Wall -W
#-ffast-math -fomit-frame-pointer -funroll-loops -Wall -Werror
DFLAGS    = -MM

BIN = $(BINDIR)/main

all : $(BIN)

$(BIN) : $(OBJFILES)
ifndef DEPEND
	$(GCC) $^ -o $@ $(LFLAGS)
else
	@echo Finished creating dependencies
endif

clean:
	rm -rf $(OBJFILES) $(BIN)

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
ifndef DEPEND
	$(GCC) $(CXXFLAGS) -I$(INCDIR) $< -c -o $@
else
	$(GCC) $(DFLAGS) -I$(INCDIR) $< -MQ $@ >> $(DEPFILE)
endif

-include $(DEPFILE)
