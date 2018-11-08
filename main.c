//      main.c:  A signal Handler demonstration in C.
//          By:  Chris Carlson
//        Date:  November 8, 2018
// Description:  The program handles two alarm signals (first after 3 seconds, second after 2 seconds). 
// 							 When it handles the alarm signal it prints,"in alarm". After two alarms pauses and waits   
//							 for a SIGINT to come from the user. When the user gives the interrupt signal, the handler
// 							 writes, "control c handled". The program detects that control c was handled and then
// 							 it pauses again. The program is killed by a kill signal. 

#include "main.h"


int main(void){
	int ret = 0;
	alarmSig = false;
	intSig = false;

	return(ret);
}


void alarmHandler(int sigVal){

}

void intHandler(int sigVal){
	
}