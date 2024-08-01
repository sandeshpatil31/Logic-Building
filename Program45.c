/* Problem Statement :- To accept a number from user and check whether the number is prime or not. */

#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNum)
{
	int iCnt = 0;
	bool bFlag = true;
	for(iCnt=2;iCnt<iNum;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			bFlag = false;
		}
	}
	return bFlag;
}

int main()
{
	int iNum = 0;
	bool bRet = false;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	bRet = checkPrime(iNum);

	if(bRet == true)
	{
		printf("%d is  prime number\n", iNum);
	}
	else
	{
		printf("%d is non  prime number\n", iNum);
	}
}