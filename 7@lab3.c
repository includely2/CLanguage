#include<stdio.h>
int prime(unsigned int a){
	int i;
	if (a == 1)return 0;
	for (i = 2; i <= a; i++)
	{
		if (i == a)return 1;
		else if (a % i == 0 && i != a)return 0;
		else continue;
	}
}/* 1 yes, 0 no */
main(){}
