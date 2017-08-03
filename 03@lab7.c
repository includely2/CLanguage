#include<stdio.h>
void mul_d(int i1[10][10], int i2[10][10], int res[10][10]){
	int i, j, k, n = 10;
	for(i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				res[i][j] += (i1[i][k] + i2[k][j]);
}
main(){}