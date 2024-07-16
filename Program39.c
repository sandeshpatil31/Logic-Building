/* Problem Statement :- Accept any number from user and check whether the given number is perfect number  
   INPUT:6
   OUTPUT: Perfect Number
*/
#include<stdio.h>
#include <stdbool.h>
/**********************************************************
 //FUNCTION NAME: checkPerfectNumber
 //DESCRIPTION: It's sum of factor input number
 //INPUT: integer
 //OUTPUT: boolean
 //DATE: 09/07/2024
 //AUTHOR: Sandesh Patil
 **********************************************************/
bool checkPerfectNumber(int iNum)
{
	if(iNum<0)
	{
		iNum = - iNum; // updator
	}
	
	int iCnt = 0;
	int iSum = 0;
	for(iCnt=1;iCnt<=iNum/2;iCnt++)
	{
		if(iNum%iCnt==0)
		{
			iSum = iSum+iCnt;
			
		}
		      
	}

    if(iSum == iNum)
    {
    	return true;
    }
    else
    {
    	return false;
    }
}
/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 09/07/2024
 //AUTHOR: Sandesh Patil
 **********************************************************/
int main()
{
	int iNum = 0;
	bool bResult=false;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	bResult=checkPerfectNumber(iNum);
	if(bResult==true)
	{
		printf("Number is perfect number");
	}
	else
	{
		printf("Number is not perfect number");
	}
	
	return 0;
}

// Time Complexity O(N/2)