#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNum)
{
   int iCnt=0;
   for(iCnt=2;iCnt< iNum;iCnt++)
   {
   	  if (iNum%iCnt==0)
   	  {
   	   return false;
   	  }
   }
   return true;
 
}

int main()
{
	int iNum=0;
     bool bRet=false;

     printf("Enter the number:\n");
     scanf("%d",&iNum);

     bRet=checkPrime(iNum);

     if(bRet==true)
     {
     	printf("prime number");
     }
     else
     {
     	printf("not prime number");
     }
     
	return 0;
}