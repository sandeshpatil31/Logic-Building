/* Problem Statement :- To accept two numbers from user and print the output given below 
                 I/P :- base = 2;
                         power = 3
                 O/P :- a^b : 2^b =8
*/  

#include<stdio.h>

int calculatePower(int iBase,int iPower )
{       
    
     int iCnt=0;
     int iMult=1;
     for (iCnt= 1; iCnt<=iPower;iCnt++)
     { 
          iMult=iMult*iBase;
     }
     return iMult;
   
}

int main()
{
	int iBase = 0;
	int iPower = 0;
	int iResult = 0;

	printf("Enter base  value:\n");
	scanf("%d", &iBase);

	printf("Enter power value:\n");
	scanf("%d", &iPower);

	iResult = calculatePower(iBase, iPower);

    printf(" power is %d",iResult);

	
	return 0;
}