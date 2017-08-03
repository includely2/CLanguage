#include<stdio.h>
#include<stdlib.h>
void eva(int a[10][10]){
	int i, j, n = 10;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 100;
}
main(){}