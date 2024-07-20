/* Problem Statement :- Program to accept the number from the user and return  summation of even  digits of given number  */

#include <stdio.h>

int sumEvenDigits(int iNum)     //  return  integer value
{
	int iDigit=0;
	int iSum=0;

	while(iNum>0)
	{
		iDigit=iNum%10;
		if(iDigit%2==0)               // find even digit and print
		{   
			iSum+=iDigit;            // sum of digits 
		} 
		iNum/=10;
		
	}
	return iSum;      // return iSum to caller function in main
}

int main()
{
	int iNum = 0;
	int iSum=0;

	printf("Enter number:\n");
	scanf("%d", &iNum);           // user  input

   iSum=sumEvenDigits(iNum);      // send input and receive sum of digit
   
   printf("Summation of even digit: %d ",iSum);
	
   return 0;
}