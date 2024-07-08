#include<stdio.h>

int addition(int iValue1, int iValue2) // Business logic function
{
	return iValue1+iValue2;
}

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

