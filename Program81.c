/* Problem statement :- To accept N numbers From user and display inputed number using Dynamic memory Allocation  */ 

#include<stdio.h>
#include<stdlib.h>

void display(int iArr[],int iLength)
{     
	register int iCnt=0;

     printf("Array Elementsare:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
     {
	  printf("%d ",iArr[iCnt]);    // print array elements
	}

}

int main()
{   
     auto int iLength = 0;
     auto int *iPtr = NULL;
     register int iCnt = 0;

     // Step:1 take array length from user

     printf("Enter the length of array :\n");
     scanf("%d",&iLength);

     // Step:2 Crete DMA

     iPtr = (int *)malloc( iLength*sizeof(int));
	 
	// Step:3  Add data in Array

	printf("Enter the array Elements:\n");
     for(iCnt=0;iCnt<iLength;iCnt++)
     {
	  scanf("%d",&iPtr[iCnt]);    // store elements one by one using iPtr address
	}

	display(iPtr,iLength);  // call by address  we pass base of iPtr and size of array

	free(iPtr);  // when we create DMA to it's neccessary to clean the memory

	return 0;

}