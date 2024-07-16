#include<stdio.h>

void getExamTimeTable(int iClass)
{
	if(iClass==1)
	{
		printf("Your exam is at 9 am\n");
	}
	else if(iClass==2)
	{
		printf("Your exam is at 10 am\n");
	}
	else if(iClass==3)
	{
		printf("Your exam is at 11 am\n");
	}
	else if(iClass==4)
	{
		printf("Your exam is at 12 pm\n");
	}
	else
	{
		printf("Wrong input\n");
	}
}

int main()
{
	int iClass = 0;
	printf("Enter your class:\n");
	scanf("%d", &iClass);

	getExamTimeTable(iClass);
	
	return 0;
}