#include<stdio.h>
void func(char a[], int n){
	int i = 0;
	for (; i < n - 2; i++)
		if (a[i] == 'z')
		{
			if (a[i + 1] == 'w')
			{
				if (a[i + 2] == 'z')
					a[i] = a[i + 1] = a[i + 2] = 'x';
			}
		}
}
main(){}
