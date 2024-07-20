#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNum)
{
   int iCnt=0;
   bool isPrime=true;
   for(iCnt=2;iCnt<=iNum/2;iCnt++)
   {
   	  if (iNum%iCnt==0)
   	  {
   	   isPrime=false;
         break;
   	  }
   }
   return isPrime;
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