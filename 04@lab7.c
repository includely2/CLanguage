#include<stdio.h>
#include<stdlib.h>
void eva(int a[10][10]){
	int i, j, n = 10;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 100;
}/* a[10][10] evaluation */

void print_d(int a[10][10]){
	int i, j, n = 10;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}/*print a[10][10]*/

void mul_d(int i1[10][10], int i2[10][10], int res[10][10]){
	int i, j, k, n = 10;
	for(i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				res[i][j] += (i1[i][k] + i2[k][j]);
}/* multiply i1[10][10], i2[10][10] */
main()
{
	int i1[10][10], i2[10][10], res[10][10] = {0};  
	eva(i1);
	print_d(i1);
	printf("\n");
	eva(i2);
	print_d(i2);
	printf("\n");
	mul_d(i1, i2, res);
	print_d(res);
}