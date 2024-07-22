 /* Print Hello 3 Times  using for loop  */

#include<stdio.h>
void display()
{
	int iCnt=0;
	for(iCnt=1;iCnt<=3;iCnt=iCnt+1)
	{
		printf("Hello\n");
	}
}
int main()
{
    display();
    return 0;
}