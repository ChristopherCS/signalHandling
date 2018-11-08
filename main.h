#include <signal.h> // For the 'signal' function
#include <stdio.h>	// For printf
#include <stdbool.h> // For the definitions of false and true
#include <unistd.h> // For the sleep function

volatile int alarmsHandled;
void alarmHandler(int sigVal);
void intHandler(int sigVal);