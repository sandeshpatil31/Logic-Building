#include<stdio.h>

/**********************************************************
 //FUNCTION NAME: addition
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 05/06/2024
 //AUTHOR: Sandesh patil
 **********************************************************/
int addition(int iValue1, int iValue2)
{
	return iValue1+iValue2;
}

/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 05/06/2024
 //AUTHOR: Splendid Infosystems
 **********************************************************/
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iResult = addition(iFirstNum, iSecNum);

	printf("Addition is = %d \n", iResult);
	
	return 0;
}