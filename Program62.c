/* Problem Statement :- To accept a number from the user and number is palindrome or not */

#include <stdio.h>
#include <stdbool.h>

 bool checkPalindromeNumber(int iNum)     //  return  integer value
{
	int iDigit=0;
	int iRev=0;
    int iTemp= iNum;

	while(iNum>0)
	{
		iDigit=iNum%10;      // find single digit
		iRev= iRev*10+iDigit;   // digit convert into number multiply 10
		iNum/=10;             // after find digit separate number from digit
		
	}
	if (iTemp == iRev)         // check orignal number and reverse is equal or not
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