/* Problem statement :- To accept N numbers From user and display even count of Array elements  */ 

#include<stdio.h>
#include<stdlib.h>

int  evenCount(int iArr[],int iLength)    // return integer value
{     
	register int iCnt=0;
     int iEvenCnt=0;
     
	for(iCnt=0;iCnt<iLength;iCnt++)
     {
     	if (iArr[iCnt] % 2 == 0)    // check even or not 
     	{
     		iEvenCnt++;           // if even number present in array iEvenCnt is increment
          }	      
	} 
	return iEvenCnt;    

}

int main()
{   
     auto int iLength = 0;
     auto int *iPtr = NULL;
     register int iCnt = 0;
     int iResult=0;

     // Step:1 Take array length from user
     printf("Enter the length of array :\n");
     scanf("%d",&iLength);

     // Step:2 Crete DMA
     iPtr = (int *)malloc( iLength*sizeof(int));
	 
	// Step:3  Add data in Array
	 printf("Enter the array Elements:\n");
     for(iCnt=0;iCnt<iLength;iCnt++)
     {
	  scanf("%d",&iPtr[iCnt]);    // store elements one by one by using iptr address
	}

	iResult=evenCount(iPtr,iLength); // Receive even count from calling fun and store in iResult variable
     
     printf("Array even count :%d ",iResult);

	free(iPtr);

	return 0;

}