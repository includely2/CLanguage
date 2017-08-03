#include<stdio.h>
int main(void)
{
	int i, r, n, m = 0;
loop:scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0 && i != n)
		{
			printf("it is not a prime number\n");
			goto loop;
		}
		else if (i == n)
		{
			for (i = 2; i <= n; i++)
			{
				for (r = 2; r <= i; r++)
				{
					if (i % r == 0 && i != r)break;
					else if (i == r)m += i * i;
					
				}
			}		
			printf("%d\n", m);
		}
	}
	return 0;
}