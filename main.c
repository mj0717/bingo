#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"
#define N_SIZE			5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n");
	printf("                   BINGO GAME              \n");
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n\n\n");
	
	
	
	//generate number
	
	//initialize bingo boards
	bingo_init();
	bingo_printBoard();
	bingo_inputNum(5);
	bingo_printBoard();
	bingo_inputNum(12);
	bingo_printBoard();
	
	/*
	//while(game is not end) //줄 수가 N_BINGO보다 작음 
	{
		//bingo board printing
		
		//print no. of completed lines
		
		//select a proper number
		
		//update the board status 
    }
	*/
	

	
	
	
	
	//ending
	
	printf("\n\n\n\n\n\n\n\n");
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n");
	printf("                 CONGRATULATION!!!         \n");
	printf("!>@#$%^<&.,?12345(*BINGO!!!*)!<@#12345.,$%^&>*\n");
	printf("                   YOU WIN                 \n");
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
