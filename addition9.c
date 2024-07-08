/**********************************************************
 //FUNCTION NAME: addition
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 05/06/2024
 //AUTHOR: Splendid Infosystems
 **********************************************************/
#include<stdio.h>
int addition(int iValue1, int iValue2)
{
	if(iValue1 < 0) 
	{
		printf("Please enter positive number\n"); 
		return -1; //Filter
	}
	if(iValue2 < 0) 
	{
		printf("Please enter positive number\n");
		return -1; //Filter
	}
	
	return iValue1+iValue2;
}