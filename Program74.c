/* Problem statement :- To accept 5 numbers From user and display inputed number using for loop*/ 

#include<stdio.h>

int main()
{
      int iArr[5];
      printf("Enter array Elements:\n");
      int iCnt=0;
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          scanf("%d",&iArr[iCnt]);
      }

      printf("Array Elements are:\n");
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          printf("%d",iArr[iCnt]);
      }

     return 0;
}