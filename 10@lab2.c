#include<stdio.h>
int main(void)
{	int n, a, b, c;
	for (n = 4; n <= 2000; n += 2)
	{
		for (a = 2; a < n; a++)
			for (b = 2; b <= a; b++)
			{
				if (a % b == 0 && a != b)break;
				else if (a == b)
				{
					for (c = 2; c <= (n - a); c++)
					{
						if ((n - a) % c == 0 && (n - a) != c)break;
						else if ((n - a) == c)
						{
							printf("%d = %d + %d\n", n, a, n - a);
						}
					}
						
				}
			}
				
	}
	return 0;
}