/* Problem statement :- To accept 5 numbers From user and display inputed number using array  */ 

#include<stdio.h>

void display(int iArr [])
{
      
      printf("Array Elements are:\n");

      register int iCnt=0; 
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          printf("%d\n",iArr[iCnt]);
         
      }
}

int main()
{        
     auto int iArr[5];
      printf("Enter array Elements:\n");

     register int iCnt=0;
      for(iCnt=0;iCnt<=4;iCnt++)
      {
          scanf("%d",&iArr[iCnt]);
      }

      display(iArr);   // call by address
      return 0;
}

// Time Complexity O(2N) to 2 loops iterate separate 2 times
