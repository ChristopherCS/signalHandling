CC = gcc
CFLAGS = -g -Wall -pedantic -std=c99
LIBRARIES =  

main : main.o  
	${CC} ${CFLAGS} -o signal main.o  ${LIBRARIES}
	
main.o : main.h


.PHONY : clean 


clean: 
	rm -f *.o core signal *.log

