#include<stdio.h>
int main(void)
{
	int i, r;
	scanf("%d", &i);
	for (r = 2; r <= i; r++)
	{
		if (i % r == 0 && i != r)
		{
			printf("it is not a prime number\n");
			break;
		}
		else if (i == r)printf("it is a prime number\n");
	}
	return 0;
}
