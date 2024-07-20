/* Problem Statement - Write a program to return the count of the total number of
factors of a given number */
 
#include<stdio.h>

int countFactors(int iNum)          // calling function
{

	 int iCnt=0;
	 int iFactCount=0;
	 for (int iCnt = 1; iCnt<=iNum/2; iCnt++)
	 {
	 	if(iNum%iCnt==0)
	 	{
	 		iFactCount++;
		}

	 }
	 
	 return iFactCount ;                 // return factCount to main caller fun

}

int main()
{
	int iNum=0;
	int iFactCount=0;

	printf("Enter the Number:\n");  
	scanf("%d",&iNum);                  // accpet user input

	iFactCount=countFactors(iNum);    // caller function 

	printf("factor count= %d\n",iFactCount);

	return 0;
}