/* Problem Statement - Write a program to accept a number from user and check the number is prime or not by factor count of given number */


#include<stdio.h>
#include<stdbool.h>

int countFactors(int iNum)
{
   int iCnt=0;
   int iFactCount=0;
   for(iCnt=2;iCnt<=iNum/2;iCnt++)
   {
      if (iNum%iCnt==0)
      {
       iFactCount++;
         break;
        }
      
   }
   return iFactCount;
}

bool checkPrime(int iNum)
{

    int iFactCount=0;
  iFactCount=countFactors(iNum);
   
   if (iFactCount==0)
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