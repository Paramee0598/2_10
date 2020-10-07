#include <stdio.h>
#include <stdlib.h>

void line() {
	printf("===================================================\n");
}
void chack(int score) {
	if((score < 0)|(score > 50)) 
	{
		printf("ERROR!");
		exit(0);
	}
	else if (!(score >= 0) | !(score <= 50))
	{
		printf("ERROR!");
		exit(0);
	}
	
}
int main(){

	int i, j, total = 0 ;
	int sc[3][3] ;

	printf("Input score of Match Unit 1 , Unit 2 and Unit 3 \n\n");

	for (i = 0; i < 3; i++)
	{
		printf(" Student No.%2d\n", i + 1);
		printf(" Unit 1 (Max 50) :");
		scanf_s("%d", &sc[i][0]); 
		chack(sc[i][0]);
		printf(" Unit 2 (Max 50) :");
		scanf_s("%d", &sc[i][1]);
		chack(sc[i][1]);
		printf(" Unit 3 (Max 50) :");
		scanf_s("%d", &sc[i][2]);
		chack(sc[i][2]);

	}
	//**************************************************************

	printf("\n\nUNIT.   Unit 1 | Unit 2 | Unit 3 |   Total (Max 150)\n");
	line();

	for (i = 0; i < 3; i++)
	{
		total = sc[i][0] + sc[i][1] + sc[i][2];

		printf("%2d. \t   %2d\t   %2d\t   %2d\t      %2d\n\n", i+1,sc[i][0], sc[i][1], sc[i][2],total);
		line();
	}
	
	return(0);
}