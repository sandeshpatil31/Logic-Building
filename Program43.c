/* Porblem Statement :- To accept a number from user and display the numbers in reverse order storing from inputed to till 1. */

#include<stdio.h>

void displayNumbers(int iNum)
{
	int iCnt=0;
    for(iCnt=iNum;iCnt>=1;iCnt--)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
	int iNum=0;

	printf("Enter the number:\n");
	scanf("%d",&iNum);
	
	displayNumbers(iNum);
	return 0;
}