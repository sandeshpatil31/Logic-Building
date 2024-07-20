/* Problem Statement :- Program to accept the number from the user and return the sum digits of given number  */

#include <stdio.h>

 int sumOfDigits(int iNum)  // return the integer  value to caller fun
{
	int iDigit=0;
    int iSum=0;

	while(iNum>0)
	{
		iDigit=iNum%10;  // find the single digit 
		iNum/=10;        // reassign the remaining number
		iSum+=iDigit;  // additon of digits
	}
   return iSum;       // return sum to main caller function
}

int main()
{
	int iNum = 0;
	int iSumDigit=0;

	printf("Enter number:\n");
	scanf("%d", &iNum);

	iSumDigit=sumOfDigits(iNum);   // receive the sum from business logic function
	printf("Summation of digit: %d\n",iSumDigit);
	
	return 0;
}

// time complexity O(N)