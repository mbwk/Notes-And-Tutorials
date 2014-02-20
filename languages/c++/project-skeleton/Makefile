# Project Makefile
# Author: Karl M. Birch
#
#	What to do when opening this file for the first time:
# 1.) Edit compilation flags
# 2.) Enter name of program under "EXE"
# 3.) Enter all source files under "SRCS"
# 3.) Review dependency generator (is it sufficient for your project?)
# 4.) make all
# 5.) ./projectname
# 6.) Did everything compile and run? Naisu, now get to work!
#
# 	Index:
# Tool settings:			line 18
# Project settings:			line 38
# Project make recipes:			line 48

# Tool up!
# Compilers:
CC		= gcc
CXX		= g++
# C Compilation flags
CSTD		= -std=c99 -pedantic
CWARN		= -Wall -Werror
CFLAGS		= $(CSTD) $(CWARN)
# C++ Compilation flags:
CPPSTD		= -std=c++03 -pedantic
CPPWARN		= -Wall -Werror
CPPFLAGS	= $(CPPSTD) $(CPPWARN)
# Linking:
LD=$(CXX)
LDFLAGS=
# Misc tools
RM=rm -f
TAR=tar -czf
UTAR=tar -xzf

# Project settings
# FILL THESE IN!!! these are just the filenames of your source files + final executable
EXE=test
SRCS=main.cpp
# Automated project settings
OBJS=${SRCS:.cpp=.o} # object files

.SUFFIXES:

.SUFFIXES: .cpp .o

.cpp.o:
	$(CXX) $(CPPFLAGS) -c $<

all: $(EXE)

$(EXE): $(OBJS)
	$(LD) $(CPPFLAGS) -o $@ $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(EXE) $(OBJS)


