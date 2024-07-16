#include <stdio.h>
#include <stdbool.h>

bool checkDivisible(int iNum)
{
	if (iNum%7==0)
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
	int iNum=0;
	bool bResult=false;
	
	printf("Enter the Number :\n");
	scanf("%d",&iNum);

	bResult=checkDivisible(iNum);


	if (bResult==true)
	{
		printf("Number is divisible of 7\n");
	}
	else
	{
		printf("Number is not divisible of 7\n");
	}
	return 0;
}