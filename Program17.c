 /* Print Hello  by user input  using for loop  */


#include<stdio.h>

void display(int iNum)
{
	int iCnt=0;
	for (int iCnt = 1 ; iCnt <=iNum ; ++iCnt)
	{
		printf("Hello\n");
	}
}
int main()
{
	int iNum=0;
	printf("How many time do you want to print\n");
	scanf("%d",&iNum);

	display(iNum);
	return 0;

}