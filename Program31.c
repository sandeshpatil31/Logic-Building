#include<stdio.h>

void getExamTimeTable(int iClass)
{
	switch(iClass)
	{
	case 1: 
		printf("Your exam is at 9am\n");
		break;

	case 2:
		printf("Your exam is at 10am\n");
		break;

	case 3:
		printf("Your exam is at 11am\n");
		break;

	case 4:
		printf("Your exam is at 12pm\n");
		break;

   default:
		printf("Wrong Input");
	
	}
}
int main()
{
	int iClass = 0;
	printf("Enter your class\n");
	scanf("%d", &iClass);

	getExamTimeTable(iClass);
	return 0;
}