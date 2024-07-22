/* Problem Statement :- TO accept a number from the user and print factors of numbers  */

#include<stdio.h>

void displayFactors(int iNum)
{
	int iCnt = 0;
	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			printf("%d\n",iCnt);
		}
	}
}
int main()
{
	int iNum = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);

	displayFactors(iNum);
	return 0;
}