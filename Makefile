# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:
.PHONY : .NOTPARALLEL

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eric/ClionProjects/Calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/ClionProjects/Calculator

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/eric/ClionProjects/Calculator/CMakeFiles /home/eric/ClionProjects/Calculator/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/eric/ClionProjects/Calculator/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named calc

# Build rule for target.
calc: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 calc
.PHONY : calc

# fast build rule for target.
calc/fast:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/build
.PHONY : calc/fast

#=============================================================================
# Target rules for targets named calc2postfix

# Build rule for target.
calc2postfix: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 calc2postfix
.PHONY : calc2postfix

# fast build rule for target.
calc2postfix/fast:
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/build
.PHONY : calc2postfix/fast

#=============================================================================
# Target rules for targets named calc2sexpr

# Build rule for target.
calc2sexpr: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 calc2sexpr
.PHONY : calc2sexpr

# fast build rule for target.
calc2sexpr/fast:
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/build
.PHONY : calc2sexpr/fast

AST.o: AST.cpp.o
.PHONY : AST.o

# target to build an object file
AST.cpp.o:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/AST.cpp.o
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/AST.cpp.o
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/AST.cpp.o
.PHONY : AST.cpp.o

AST.i: AST.cpp.i
.PHONY : AST.i

# target to preprocess a source file
AST.cpp.i:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/AST.cpp.i
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/AST.cpp.i
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/AST.cpp.i
.PHONY : AST.cpp.i

AST.s: AST.cpp.s
.PHONY : AST.s

# target to generate assembly for a file
AST.cpp.s:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/AST.cpp.s
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/AST.cpp.s
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/AST.cpp.s
.PHONY : AST.cpp.s

Parser.o: Parser.cpp.o
.PHONY : Parser.o

# target to build an object file
Parser.cpp.o:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/Parser.cpp.o
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/Parser.cpp.o
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/Parser.cpp.o
.PHONY : Parser.cpp.o

Parser.i: Parser.cpp.i
.PHONY : Parser.i

# target to preprocess a source file
Parser.cpp.i:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/Parser.cpp.i
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/Parser.cpp.i
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/Parser.cpp.i
.PHONY : Parser.cpp.i

Parser.s: Parser.cpp.s
.PHONY : Parser.s

# target to generate assembly for a file
Parser.cpp.s:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/Parser.cpp.s
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/Parser.cpp.s
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/Parser.cpp.s
.PHONY : Parser.cpp.s

calc2PostfixMain.o: calc2PostfixMain.cpp.o
.PHONY : calc2PostfixMain.o

# target to build an object file
calc2PostfixMain.cpp.o:
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/calc2PostfixMain.cpp.o
.PHONY : calc2PostfixMain.cpp.o

calc2PostfixMain.i: calc2PostfixMain.cpp.i
.PHONY : calc2PostfixMain.i

# target to preprocess a source file
calc2PostfixMain.cpp.i:
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/calc2PostfixMain.cpp.i
.PHONY : calc2PostfixMain.cpp.i

calc2PostfixMain.s: calc2PostfixMain.cpp.s
.PHONY : calc2PostfixMain.s

# target to generate assembly for a file
calc2PostfixMain.cpp.s:
	$(MAKE) -f CMakeFiles/calc2postfix.dir/build.make CMakeFiles/calc2postfix.dir/calc2PostfixMain.cpp.s
.PHONY : calc2PostfixMain.cpp.s

calc2SexprMain.o: calc2SexprMain.cpp.o
.PHONY : calc2SexprMain.o

# target to build an object file
calc2SexprMain.cpp.o:
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/calc2SexprMain.cpp.o
.PHONY : calc2SexprMain.cpp.o

calc2SexprMain.i: calc2SexprMain.cpp.i
.PHONY : calc2SexprMain.i

# target to preprocess a source file
calc2SexprMain.cpp.i:
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/calc2SexprMain.cpp.i
.PHONY : calc2SexprMain.cpp.i

calc2SexprMain.s: calc2SexprMain.cpp.s
.PHONY : calc2SexprMain.s

# target to generate assembly for a file
calc2SexprMain.cpp.s:
	$(MAKE) -f CMakeFiles/calc2sexpr.dir/build.make CMakeFiles/calc2sexpr.dir/calc2SexprMain.cpp.s
.PHONY : calc2SexprMain.cpp.s

calcMain.o: calcMain.cpp.o
.PHONY : calcMain.o

# target to build an object file
calcMain.cpp.o:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/calcMain.cpp.o
.PHONY : calcMain.cpp.o

calcMain.i: calcMain.cpp.i
.PHONY : calcMain.i

# target to preprocess a source file
calcMain.cpp.i:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/calcMain.cpp.i
.PHONY : calcMain.cpp.i

calcMain.s: calcMain.cpp.s
.PHONY : calcMain.s

# target to generate assembly for a file
calcMain.cpp.s:
	$(MAKE) -f CMakeFiles/calc.dir/build.make CMakeFiles/calc.dir/calcMain.cpp.s
.PHONY : calcMain.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... calc"
	@echo "... calc2postfix"
	@echo "... calc2sexpr"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... AST.o"
	@echo "... AST.i"
	@echo "... AST.s"
	@echo "... Parser.o"
	@echo "... Parser.i"
	@echo "... Parser.s"
	@echo "... calc2PostfixMain.o"
	@echo "... calc2PostfixMain.i"
	@echo "... calc2PostfixMain.s"
	@echo "... calc2SexprMain.o"
	@echo "... calc2SexprMain.i"
	@echo "... calc2SexprMain.s"
	@echo "... calcMain.o"
	@echo "... calcMain.i"
	@echo "... calcMain.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

