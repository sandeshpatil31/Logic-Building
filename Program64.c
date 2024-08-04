/* Problem Statement :- To accept two numbers from user and print the output given below 
                 I/P :- firstNum = 2;
                          secondNum = 4
                 O/P :- (2+2+2+2+2) = 8
*/                    

#include<stdio.h>

void addition(int iFirstNum,int iSecNum)
{
       
       int iCnt=0;
       int iSum=0;

      for (iCnt=1;iCnt<=iSecNum;iCnt++)
      {
      	    iSum+=iFirstNum;
      }

      printf("Summation is %d ",iSum);

}

int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	addition(iFirstNum, iSecNum);

	
	return 0;
}