/* Problem statement :- To accept 5 numbers From user and display inputed number using array */ 

#include<stdio.h>

int main()
{
	int iArr[5];   // Araay size is compile time constant

	printf("Enter any 5 integer numbers:\n");
	scanf("%d",&iArr[0]);
	scanf("%d",&iArr[1]);
	scanf("%d",&iArr[2]);
	scanf("%d",&iArr[3]);
	scanf("%d",&iArr[4]);  
    

	printf("Array Elements are:\n");
    printf("%d\n",iArr[0]);
    printf("%d\n",iArr[1]);  
    printf("%d\n",iArr[2]); 
    printf("%d\n",iArr[3]); 
    printf("%d\n",iArr[4]); 

   return 0;

   
}