 /* Print Hello 5 Times  using for loop  */


#include<stdio.h>
void display()
{
	int iCnt = 0;
	for(iCnt = 1;iCnt <= 5;++iCnt)
	{
		printf("Hello\n");
	}
}
int main()
{
	display();
	return 0;
}