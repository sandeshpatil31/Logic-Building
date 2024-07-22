
 /* Print Hello  by user input And handle negative number*/

#include<stdio.h>

void display(int iValue)
{
	if(iValue<0)
	{
		iValue = - iValue; //Updator
	}
	
	int iCnt = 0;
	for(iCnt = 1;iCnt <= iValue ;iCnt++)
	{
		printf("Hello\n");
	}
}
int main()
{
	int iCnt = 0;
	printf("How many times do you want to print?\n");
	scanf("%d",&iCnt);

	display(iCnt);

	return 0;
}	