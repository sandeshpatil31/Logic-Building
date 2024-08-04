/* Problem Statement :- To accept two numbers from user and return the output given below handle code optimization using range modifire
                 I/P :- base = 2;
                         power = 3
                 O/P :- a^b : 2^b =8
*/  

#include<stdio.h>

unsigned long int calculatePower(int iBase,int iPower )
{       
    
    register int iCnt=0;
     unsigned long int iMult=1;
     for (iCnt= 1; iCnt<=iPower;iCnt++)
     { 
          iMult=iMult*iBase;
     }
     return iMult;
   
}

int main()
{
	auto int iBase = 0;
	auto int iPower = 0;
	auto unsigned long int iResult = 0;

	printf("Enter base  value:\n");
	scanf("%d", &iBase);

	printf("Enter power value:\n");
	scanf("%d", &iPower);

	iResult = calculatePower(iBase, iPower);

    printf(" power is %ld",iResult);

	
	return 0;
}