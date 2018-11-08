# makefile: Builds the program. Executable is called "signal". 
#       By: Chris Carlson
#     Date: November 8, 2018

CC = gcc
CFLAGS = -g -Wall -pedantic -std=c99
LIBRARIES =  

main : main.o  
	${CC} ${CFLAGS} -o signal main.o  ${LIBRARIES}
	
main.o : main.h


.PHONY : clean 


clean: 
	rm -f *.o core signal *.log

