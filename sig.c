#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main( int argc,char** argv ) {
	int clock_tick = 0 ;
	while( 1 ) {
		printf("tick %d...\n",clock_tick ) ;
		clock_tick += 10 ;
		sleep( 10 ) ;
		


	}


	return 0 ;

}
