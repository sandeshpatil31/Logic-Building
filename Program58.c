/* Problem Statement :- Program to accept the number from the user and print the even digits of given number  */

#include <stdio.h>

void displayEvenDigits(int iNum)     // nothing return 
{
	int iDigit=0;

	while(iNum>0)
	{
		iDigit=iNum%10;
		if(iDigit%2==0)               // find even digit and print
		{ 
			printf("%d\n",iDigit);
		}
		iNum/=10;
		
	}
}

int main()
{
	int iNum = 0;

	printf("Enter number:\n");
	scanf("%d", &iNum);           // accept from user 

	displayEvenDigits(iNum);
	
	return 0;
}