/* Problem statement :- To accept N numbers From user and display Sum of array elements */ 

#include<stdio.h>
#include<stdlib.h>

int SumOfArray(int iArr[],int iLength)    // iArr is refrence to iPtr base address 
{     
	register int iCnt=0;
     int iSum=0;
     
	for(iCnt=0;iCnt<iLength;iCnt++)
     {
     		iSum+=iArr[iCnt];      // add iCnt one by one in iSum        
          	      
	} 
	return iSum;    

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

	iResult=displaySumOfArray(iPtr,iLength); 
     
     printf("Summation of array :%d ",iResult);

	free(iPtr);

	return 0;

}