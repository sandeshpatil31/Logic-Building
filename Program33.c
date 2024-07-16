#include<stdio.h>

void jwellersPortal(int iWeight)
{
	switch(iWeight)
	{
	case 1:
		printf("Your bill amount is 5K\n");
		break;
	case 2:
		printf("Your bill amount is 10K\n");
		break;
	case 4:
		printf("Your bill amount is 20K\n");
		break;
	case 8:
		printf("Your bill amount is 40K\n");
		break;
	default:
		printf("Invalid weight\n");
	}
}
int main()
{
	int iWeight = 0;
	printf("Enter weight:\n");
	scanf("%d", &iWeight);

	jwellersPortal(iWeight);
	return 0;
}