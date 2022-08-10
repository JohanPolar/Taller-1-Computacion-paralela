#***************************************
# Fecha 9 - Agosto - 2022
# Author: Johan Moreno
# Assignature: Computación paralela y distribuida
#***************************************/

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99
MATHFLAG = -lm

PROGS = Taller1_main

all: $(PROGS)

Taller1_main: 
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c Taller1_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o Taller1_lib.o $(MATHFLAG)
	
	
clean:
	$(RM) *.o $(PROGS)
	
