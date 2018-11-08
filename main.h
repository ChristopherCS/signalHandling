#include <signal.h> // For the 'signal' function
#include <stdio.h>	// For printf
#include <stdbool.h> // For the definitions of false and true
#include <unistd.h> // For the sleep function

// volatile sig_atomic_t alarmSig;
// volatile sig_atomic_t intSig;
volatile int alarmsHandled;
volatile int intsHandled;
void alarmHandler(int sigVal);
void intHandler(int sigVal);