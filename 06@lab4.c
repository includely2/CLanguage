#include<stdio.h>
double max(double a[],int n){
	int i = 0;
	double MAX;
	for (MAX = a[i]; i < n; i++)
		if (MAX - a[i] < 0)MAX = a[i];
	return MAX;
}

double min(double a[],int n){
	int i = 0; 
	double MIN;
	for (MIN = a[i]; i < n; i++)
		if (MIN - a[i] > 0)MIN = a[i];
	return MIN;
}

double sum(double a[], int n){
	int i = 0;
	double s;
	for (s = 0; i < n; i++)
		s += a[i];
	return s;
}

main()
{
	int i = 0, n = 10;
	double a[10], s;
	for (; i < n; i++)
		scanf("%lf",&a[i]);
	s = sum(a, n);
	printf("%lf\n",  (s - max(a, n) - min(a, n)) / (n - 2));
}