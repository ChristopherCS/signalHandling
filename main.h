// main.h: Header file for a signal handler demonstration in c. 
//     By: Chris Carlson
//   Date: November 8, 2018

#include <signal.h>  // For the 'signal' function
#include <stdio.h>	 // For printf
#include <stdbool.h> // For the definitions of false and true
#include <unistd.h>  // For the sleep function

volatile int alarmsHandled;
void alarmHandler(int sigVal);
void intHandler(int sigVal);
