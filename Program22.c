#include<stdio.h>
void display(int iNum)
{
	for(int iCnt=1;iCnt<=iNum;iCnt++)
	{
		printf("%d \n",iCnt);
	}

}
int main()
{
	int iNum=0;
	printf("Enter the no: \n");
	scanf("%d",&iNum);

	display(iNum);
	return 0;
}