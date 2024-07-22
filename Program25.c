/*   Problem Statment :- To accept a number from user and check number is odd or not. */

#include<stdio.h>
#include <stdbool.h>
bool checkOdd(int iNum)
{
	if(iNum%2!=0)
	{
	  	return true;
	}
	else
    {
       return false;
    }

}
int main()
{
	int iNum=0;
	bool bRet=false;
	printf("Enter the number: \n");
	scanf("%d",&iNum);

	 bRet=checkOdd(iNum);
	 if(bRet==true)
	 {
	 	printf("Number id odd");
	 }
	 else
	 {
	 	printf("Number is Even");
	 }
	return 0;
}