#include <stdio.h>
#include "bingoBoard.h"
#define BINGOUNUM_HOLE		-1
#include <time.h>

static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE];




void bingo_init(void)
{
	int i, j;
	int cnt=1;
	
	for(i=0;i<N_SIZE;i++)
		for(j=0;j<N_SIZE;j++)
		{
			if (cnt==15)
			{
				bingoBoard[i][j]=BINGOUNUM_HOLE;
				cnt++;
			}
			else
			{
				numberStatus[cnt-1]=i*N_SIZE+j;
				bingoBoard[i][j]=cnt;
				cnt++;
			}
		}
}
void bingo_printBoard(void)
{
	int i,j;
	printf("^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^^_^\n");
	for(i=0;i<N_SIZE;i++){
		
		for(j=0;j<N_SIZE;j++)
		{
			if (bingoBoard[i][j]==BINGOUNUM_HOLE)
				printf("x\t");
			else
				printf("%i\t",bingoBoard[i][j]);
		}
		printf("\n");
		}
		
	printf(">_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<>_<\n");	
}
void bingo_inputNum(int sel)
{
	int i, j;
	i=numberStatus[sel-1]/N_SIZE;
	j=numberStatus[sel-1]%N_SIZE;
	bingoBoard[i][j]=BINGOUNUM_HOLE;
	
	
	
	
	

	

	
}
int bingo_countCompletedLine(void)
{
}


















