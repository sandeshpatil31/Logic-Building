/*   Problem Statment :- To accept a number from user and check number is multiple of 3 and 5  */


#include<stdio.h>
#include <stdbool.h>

bool checkMultiple(int iNum)
{
	if (iNum%3==0 && iNum%5==0)
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

	printf("Enter the number:\n");
	scanf("%d",&iNum);


	bResult=checkMultiple(iNum);
	
	if (bResult==true)
	{
		printf("Number is multiple of 3 and 5\n");
	}
	else
	{
		printf("Number is not multiple of 3 and 5\n");
	}

	return 0;
}