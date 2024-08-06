/* Problem statement :- To accept N numbers From user and display even numbers from array  */ 

#include<stdio.h>
#include<stdlib.h>

void display(int iArr[],int iLength)    // iArr is refrence to iPtr base address 
{     
	register int iCnt=0;

     printf("Array Elementsare:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
     {
     	if (iArr[iCnt] % 2 == 0)    // check even or not 
     	{
            printf("%d ",iArr[iCnt]);  // print even elements
	     }
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

     iPtr = (int *)malloc( iLength*sizeof(int));  // Dynamic memory allocation using malloc
	 
	// Step:3  Add data in Array

	printf("Enter the array Elements:\n");
     for(iCnt=0;iCnt<iLength;iCnt++)
     {
	  scanf("%d",&iPtr[iCnt]);          // store elements one by one by using iptr address
	}

	display(iPtr,iLength);             // call by address  iPtr is pass base address to business function

	free(iPtr);                // free memory

	return 0;

}