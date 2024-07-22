/*   Problem Statment :- To accept a number from user and  return summation of even number to still that number */


#include<stdio.h>

int summationOfEvenNumbers(int iNum) // return integer value
{
	int iSum = 0;
	int iCnt = 0;

	for(iCnt=1;iCnt<=iNum;iCnt++) 
	{
		if(iCnt%2 == 0)  // Check Even
		{
			iSum = iSum+iCnt;   // Sum of even numbers
		}
	}
	return iSum;
}
int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter the number:\n");
	scanf("%d",&iNum);

	iRet = summationOfEvenNumbers(iNum);
	printf("Summation = %d\n", iRet); 
}