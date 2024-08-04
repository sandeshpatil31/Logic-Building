/* Problem Statement :- To accept a number from the user and number is palindrome or not using single funciton handle single responsibility */

#include <stdio.h>
#include <stdbool.h>

int reverseNumber(int iNum)     //  return  integer value
{
	int iDigit=0;
	int iRev=0;

	while(iNum>0)
	{
		iDigit=iNum%10;      // find single digit
		iRev= iRev*10+iDigit;   // digit convert into digit
		iNum/=10;             // after find digit separate number from digit
		
	}
	return iRev;
}

 bool checkPalindromeNumber(int iNum)     //  return  boolean value
{
	
	int iRev=0;
    iRev=reverseNumber(iNum);     // receive reverse number from reverseNumber function

     
	if (iNum == iRev)         // check orignal number and reverse is equal or not
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
      bool bRet=false;

	printf("Enter number:\n");
	scanf("%d", &iNum);   

    bRet=checkPalindromeNumber(iNum);       // receive the number from calling function
    
    if (bRet==true)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

	
   return 0;
}