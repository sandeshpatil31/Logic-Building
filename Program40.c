#include<stdio.h>
#include<stdbool.h>

int SumOfFactors(int iNum)
{
  
	int iCnt = 0;
	int iSum = 0;
	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			iSum = iSum+iCnt;
		}
	}
	return iSum;
	
}

bool checkPerfectNumber(int iNum)
{
	int iSum=0;
	iSum=SumOfFactors(iNum);
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
	bool bResult=false;

	printf("Enter number:\n");
	scanf("%d", &iNum);

	bResult=checkPerfectNumber(iNum);

	if(bResult==true)
	{
		printf("Number is perfect number");
	}
	else
	{
		printf("Number is not perfect number");
	}
	
	return 0;
}


// Time complexity is O(N/2)