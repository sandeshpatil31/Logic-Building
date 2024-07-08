#include<stdio.h>
int summation(int iNum)//10
{
	int iSum = 0;
	int iCnt = 0;

	for(iCnt=1;iCnt<=iNum;iCnt++) //icnt = 4
	{
		if(iCnt%2 == 0)//Even
		{
			iSum = iSum+iCnt;
		}
	}
	return iSum;
}
int main()
{
	int iNum = 0;
	int iRet = 0;

	printf("Enter the number:\n");//10
	scanf("%d",&iNum);

	iRet = summation(iNum);
	printf("Summation = %d\n", iRet);
}