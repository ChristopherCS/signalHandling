//      main.c:  A signal handler demonstration in C.
//          By:  Chris Carlson
//        Date:  November 8, 2018
// Description:  The program handles two alarm signals (first after 3 seconds, second after 2 seconds). 
//               When it handles the alarm signal it prints,"in alarm". After two alarms pauses and waits   
//               for a SIGINT to come from the user. When the user gives the interrupt signal, the handler
//               writes, "control c handled". The program detects that control c was handled and then
//               it returns.

#include "main.h"


int main(void){
	int ret = 0;
	unsigned int alarmSeconds = 3;
	alarmsHandled = 0;
	
	

	signal(SIGALRM, alarmHandler);
	signal(SIGINT, intHandler);

	while(alarmsHandled < 2){
		alarm(alarmSeconds--);
		if(sleep(20)){
			printf("alarm interrupted sleep\n");
		}
	}

	pause();

	return(ret);
}


void alarmHandler(int sigVal){
	alarmsHandled++;
	printf("in alarm\n");
	signal(SIGALRM, alarmHandler);
}

void intHandler(int sigVal){
	printf("\ncontrol c handled\n");
	signal(SIGINT, intHandler);
}
