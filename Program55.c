/* Problem Statement :- Program to accept the number from the user and print the digits of given number  */

#include <stdio.h>

void displayDigits(int iNum)
{
	int iDigit=0;

	while(iNum>0)
	{
		iDigit=iNum%10;
		printf("%d\n",iDigits);
		iNum/=10;
	}
}

int main()
{
	int iNum = 0;

	printf("Enter number:\n");
	scanf("%d", &iNum);

	displayDigits(iNum);
	
	return 0;
}