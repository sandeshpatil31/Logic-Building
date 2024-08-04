// main file 

#include "header70.h"

int main()
{
	auto int iBase = 0;
	auto int iPower = 0;
	ULONG iResult = 0;

	printf("Enter base  value:\n");
	scanf("%d", &iBase);

	printf("Enter power value:\n");
	scanf("%d", &iPower);

	iResult = calculatePower(iBase, iPower);

    printf(" power is %ld",iResult);

	
	return 0;
}