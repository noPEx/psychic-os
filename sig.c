#include <stdio.h>
#include <signal.h>
#include <unistd.h>


// int sigaction(int signum, const struct sigaction *act,
 //                    struct sigaction *oldact);

void handler( int signum ) {
	if( signum == SIGINT ) {
		printf("SIGINT caught\n") ;
	}
	if( signum == SIGTERM ) {

		printf("SIGTERM caught\n") ;
	}
	if( signum == SIGTSTP ) {

		printf("SIGTSTP caught\n") ;
	}
}

int main( int argc,char** argv ) {
	signal( SIGINT,handler ) ;
	signal( SIGTERM,handler ) ;
	signal( SIGTSTP,handler ) ;
	int clock_tick = 0 ;
	while( 1 ) {
		printf("tick %d...\n",clock_tick ) ;
		clock_tick += 10 ;
		sleep( 10 ) ;



	}


	return 0 ;

}
