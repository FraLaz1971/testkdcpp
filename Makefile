SHELL = bash
CXX = g++
INCLUDES=-I.
CPPFLAGS=$(INCLUDES)
CXXFLAGS=-Wall -g -O
RM = rm -f
CP = cp
INSTALL = $(CP)
EEXT = 
OEXT = .o
TARGET1 = testkdcpp
TARGETS = $(TARGET1) debug
SRCDIR = ./
BINDIR = bin/
OBJS = asciitable$(OEXT) main$(OEXT)

.PHONY = all debug clean run install

all: $(TARGET1)$(EEXT)

debug: main.cpp asciitable.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -DDEBUG -o $@ $?


$(TARGET1)$(EEXT): main.cpp asciitable.cpp

	$(CXX) -o $@ $?


install: all
	@if ! test -d bin; then mkdir bin; fi	
	@$(INSTALL) $(TARGETS) bin

clean:
	$(RM) $(TARGETS) $(OBJS)

distclean: clean
	$(RM) $(BINDIR)*

run: install debug
	@$(SRCDIR)/run.sh table.asc 3 2

rundbg: install debug
	$(SRCDIR)debug table.asc 3 2
