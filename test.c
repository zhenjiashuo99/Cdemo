#include <stdio.h>

int main()
{
	int s[10];
	int i,sum;

	for(i = 0;i < 10;i++)
	{
		printf("Please enter the %i stdunt\n",i+1);
		scanf("%d",&s[i]);
		sum += s[i];

	}
	printf("The average is %.2f\n",(double)sum / 10);
	return 0;
	
}
