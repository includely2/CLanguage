#include<stdio.h>
int main(void)
{
	int a, b, n;
	printf("enter a number to n\n");
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
		for (b = 1; b <= n; b++)
			printf("%d - %d\n", a, b);
		return 0;
}