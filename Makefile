
GCC = gcc 
FLAGS = -Wall -Werror 
DEBUGGER = -ggdb
SRC = analyzer.c
INCLUDE = analyzer.h


analyzer: 
	$(GCC) $(FLAGS) $(DEBUGGER) main.c $(SRC) $(INCLUDE) -o analyzer
