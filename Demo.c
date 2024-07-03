#include<stdio.h>
 int Addition(int iNum)
{
  int iCnt=0;
  int  iSum=0;
  if (iNum < 0)
  {
    iNum= - iNum;
  }
  for(iCnt=1;iCnt<=iNum;iCnt++)
  {
    iSum=iSum+iCnt;
  }
  return iSum;
 
}
int main()
{
  int iNum=0;
  int iResult=0;
  printf("Enter the number:\n");
  scanf("%d",&iNum);

  iResult =  Addition(iNum);
  printf("%d",iResult);
  return 0;
  
 }

