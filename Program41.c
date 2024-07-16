#include<stdio.h>
#include<stdbool.h>

int sumOfFactors(int iNum)
{
	int iSum = 0;
	int iCnt = 0;
	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			iSum = iSum+iCnt;
		}
		if(iSum>iNum)
		{
			break;
		}
	}
	return iSum;
}

bool checkPerfect(int iNum)
{
	int iSum = 0;
	iSum = sumOfFactors(iNum);

	if(iSum == iNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNum = 0;
	bool bRet = false;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	bRet = checkPerfect(iNum);

	if(bRet == true)
	{
		printf("%d is perfect number\n", iNum);
	}
	else
	{
		printf("%d is not perfect number\n", iNum);
	}
}