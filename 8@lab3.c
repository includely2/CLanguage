#include<stdio.h>
#include<math.h>
int prime(unsigned int a){
	int i;
	for (i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0 && i != sqrt(a))return 0;
		else return 1;
	}
}/* 1 yes, 0 no */
main()
{
	int m, n, add = 0;
	scanf("%d%d", &m, &n);
	for (; m <= n; m++)
	{
		if (prime(m))
		{
			printf("%d\n", m);
			add += m;
		}
		else continue;
	}
	printf("add = %d\n", add);
}