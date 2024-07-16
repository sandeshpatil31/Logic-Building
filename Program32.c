#include<stdio.h>

void displayClass(float fMarks)
{
	if(fMarks>=0.0 && fMarks<35.0)
	{
		printf("Failed\n");
	}
	else if(fMarks>=35.0 && fMarks<50.0)
	{
		printf("Pass Class\n");
	}
	else if(fMarks>=50.0 && fMarks<60.0)
	{
		printf("Second Class\n");
	}
	else if(fMarks>=60.0 && fMarks<75.0)
	{
		printf("First Class\n");
	}
	else if(fMarks>=75.0 && fMarks<=100.0)
	{
		printf("First Class with Distinction\n");
	}
	else
	{
		printf("Invalid Marks\n");
	}
}
int main()
{
	float fMarks = 0.0;
	printf("Enter marks:\n");
	scanf("%f", &fMarks);

	displayClass(fMarks);
	
	return 0;
}