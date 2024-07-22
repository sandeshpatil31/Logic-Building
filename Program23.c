 /* TO Print Numbers to accept the value if negative handle it from user */

#include<stdio.h>

void display(int iNum)
{
	if(iNum<0)
	{
         iNum = - iNum;
	}
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