/* TO Accept the number from user and return  summation of still number */

#include<stdio.h>

int summation(int iNum)
{
	if(iNum<0)
	{
         iNum = - iNum;
	}
	int iSum=0;
	for(int iCnt=1;iCnt<=iNum;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;

}
int main()
{
	int iNum=0;
	int iRet=0;
	printf("Enter the no: \n");
	scanf("%d",&iNum);

	iRet=summation(iNum);
	printf("Summation = %d\n", iRet);

	return 0;
}