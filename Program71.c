/* Problem Statement :- To accept a number from the user and number is Armstrong(Narcissistic) number  or not */

#include<stdio.h>
#include<stdbool.h>


int  calculatePower(int iBase,int iPower )
{       
    
     int iCnt=0;
    int  iMult=1;

     for (iCnt= 1; iCnt<=iPower;iCnt++)
     { 
          iMult = iMult*iBase;
     }

   return iMult;
   
}

 bool checkArmstrongNumber(int iNum) 
{
	 int iTemp=iNum;
	int iDigit=0;
    int iDigitCnt=0;
    int iSum=0;
    
	while(iNum>0)
	{ 
		iDigit=iNum%10;      
		iDigitCnt++;              
		iNum=iNum/10;          
	
	}

     iNum =iTemp;

	 while(iNum>0)
	{ 
		iDigit = iNum%10;  
        iSum = iSum + calculatePower(iDigit,iDigitCnt);
		iNum = iNum/10;          
	
	}
	if (iTemp == iSum)
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
     auto int iNum=0;
     bool bRet=false;

	 printf("Enter the number:\n");
	 scanf("%d", &iNum);

    bRet=checkArmstrongNumber(iNum);

        
    if (bRet == true)
    {
        printf("Number is ArmStrong");
    }
    else
    {
        printf("Number is not ArmStrong");
    }
	   
	   return 0;
}