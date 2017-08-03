#include<stdio.h>
void print_d(int a[10][10]){
	int i, j, n = 10;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
main(){}
