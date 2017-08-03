#include<stdio.h>
main()
{
	int a[170], b = 0, i, n = 170, t = 1;
	while(b < n - 1)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] == 3)continue;
			if (t == 4)
			{
				b++;
				if (b == n - 1)
				{
					printf("%d\n", i + 1);
					break;
				}
				t = 1;
			}
			a[i] = t++;
		}
	}
}
