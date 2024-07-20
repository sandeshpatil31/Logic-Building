/* Problem Statement :- Program to accept the number from the user and return the count even digits of given number  */

#include <stdio.h>

int countEvenDigits(int iNum)     //  return  integer value
{
	int iDigit=0;
	int iCnt=0;

	while(iNum>0)
	{
		iDigit=iNum%10;
		if(iDigit%2==0)               // find even digit and print
		{ 
		    iCnt++;
		}
		iNum/=10;
		
	}
	return iCnt;      // return icnt to caller function in main
}

int main()
{
	int iNum = 0;
	int iCount=0;

	printf("Enter number:\n");
	scanf("%d", &iNum);           // user  input

   iCount=countEvenDigits(iNum);  // send input and receive count of digit
   printf("Count of even digit: %d ",iCount);
	
	return 0;
}