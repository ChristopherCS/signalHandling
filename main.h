#include <signal.h> // For the 'signal' function
#include <stdio.h>	// For printf
#include <stdbool.h> // For the definitions of false and true

volatile sig_atomic_t alarmSig;
volatile sig_atomic_t intSig;

void alarmHandler(int sigVal);
void intHandler(int sigVal);