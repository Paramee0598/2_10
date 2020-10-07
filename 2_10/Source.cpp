#include <stdio.h>
void main(){

	int i, j, total = 0;
	int sc[3][3] = {};

	printf("Input score of Calculus , ITC and ProFun \n\n");

	for (i = 0; i < 3; i++)
	{
		printf(" Student No.%2d\n", i + 1);
		scanf_s("%d %d %d", &sc[i][0], &sc[i][1], &sc[i][2]);
	}
	//**************************************************************

	printf("\n\nSeq.   Cal    ITC    ProFun    Total\n");
	printf("========================================\n");

	for (i = 0; i < 3; i++)
	{
		total = sc[i][0] + sc[i][1] + sc[i][2];

		printf("%2d. \t %2d\t %2d\t %2d\t %2d\n\n", i+1,sc[i][0], sc[i][1], sc[i][2],total);
	}
	
	//return(0);
}