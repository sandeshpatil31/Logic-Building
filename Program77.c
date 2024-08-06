/* Problem statement :- To accept 5 numbers From user and display inputed number using array  */ 

#include<stdio.h>

void display(int iPtr [])
{
      
      printf("Array Elements are:\n");
      int iCnt=0;
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          printf("%d\n",*iPtr++);
         
      }
}

int main()
{        
      int iArr[5];
      printf("Enter array Elements:\n");

      int iCnt=0;
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          scanf("%d",&iArr[iCnt]);
      }

      display(iArr);   // call by address
      return 0;
}