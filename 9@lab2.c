#include<stdio.h>
#include<math.h>
int main(void)
{
	int n, i, a = 1, b = 1, c = 1, d;
	printf("enter a number to n\n");
	scanf("%d", &n);
    if (n <= 3)printf("1\n");
	else 
	{
		for (i = 4; i <= n; i++)
		{
			d = a + c;
			a = b;
			b = c;
			c = d;
		}
		printf("%d\n", d);
	}
	
	return 0;
}
