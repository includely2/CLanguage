#include<stdio.h>
int main(void)
{
	int k, a, b;
	printf("enter a number to k\n");
	scanf("%d", &k);
	for (a = k - 1; a >= 0; a--)
	{
		for (b = k; b >= k - a + 1; b--)printf(" ");
		for (; b >= 0; b--)
		{
			if (b == 0)printf("\n");
			else printf("+");
		}
	}
	return 0;
}