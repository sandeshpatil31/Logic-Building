/* Problem Statement :- Program to accept the number from the user and return the count digits of given number  */

#include <stdio.h>

 int countDigits(int iNum)     //  take parameter passing by caller  and return integer value
{
	int iDigit=0;
    int iCnt=0;

	while(iNum>0)
	{ 
		iDigit=iNum%10;       //  fing single using modulo operator
		iCnt++;              // add count of single digit
		iNum/=10;            // find quotient by diving for remaining digits
		
	}
   return iCnt;        // return count to caller in main
}

int main()
{
	int iNum = 0;
	int iCountDigit=0;

	printf("Enter number:\n");
	scanf("%d", &iNum);

	iCountDigit=countDigits(iNum);                // receive the count by calling fun
	printf("Count of digit: %d\n",iCountDigit);
	
	return 0;
}