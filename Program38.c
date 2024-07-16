#include<stdio.h>
void displaySumOfFactors(int iNum)
{
	if(iNum<0)
	{
		iNum = - iNum;
	}
	
	int iCnt = 0;
	int iSum = 0;

	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			iSum = iSum+iCnt;
		}
	}
	iSum = iSum+iNum;
	printf("Summation = %d", iSum);
}
int main()
{
	int iNum = 0;
	
	printf("Enter number:\n");
	scanf("%d", &iNum);

	displaySumOfFactors(iNum);
	return 0;
}