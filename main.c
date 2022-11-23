#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"


#define BINGO_RES_UNFINISHED     -1
#define BINGO_RES_FINISHED        0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int check_gameEnd(void){
	
	int res=BINGO_RES_UNFINISHED;
	if(bingo_countCompletedLine()>=N_LINE)
		res= BINGO_RES_FINISHED;
		
	return res;	
}


int get_number(void)
{
	int selNum=0;
	
	do{
		printf("select a number: ");
		scanf("%d",&selNum);
		fflush(stdin);//버퍼 제거?
		
		if(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		} 
		
	}while(selNum<1||selNum>N_SIZE*N_SIZE||bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT);
	
		return selNum;
}


int main(int argc, char *argv[]) {
	
	int selNum;
	srand((unsigned)time(NULL));
	
	
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n");
	printf("                   BINGO GAME              \n");
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n\n\n");
	
	
	
	//generate number
	
	//initialize bingo boards
	bingo_init();
	
	while(check_gameEnd()==BINGO_RES_UNFINISHED)
	{
		bingo_printBoard();
		
		printf("No. of completed line : %i\n",bingo_countCompletedLine());
		
		selNum=get_number();
		
		printf("%i\n", selNum);
		
		bingo_inputNum(selNum);
		
		
	}


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
	
	bingo_printBoard();
	
	return 0;
}


