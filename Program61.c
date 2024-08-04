/* Problem Statement :- To accept a number from the user and return the reverse of given number */

#include <stdio.h>

int reverseNumber(int iNum)     //  return  integer value
{
	int iDigit=0;
	int iRev=0;

	while(iNum>0)
	{
		iDigit=iNum%10;      // find single digit
		iRev= iRev*10+iDigit;   // digit convert into number
		iNum/=10;             // after find digit then separate number from digit
		
	}

	return iRev;
}

int main()
{
	int iNum = 0;
	int iRet=0;

	printf("Enter number:\n");
	scanf("%d", &iNum);   

    iRet=reverseNumber(iNum);       // receive the number from calling function
   
   printf("Reverse number: %d ",iRet);
	
   return 0;
}