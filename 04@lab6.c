#include<stdio.h>
void hello(char* id){
	printf("hello %s\n", id);
}

int num(char* a){
	do
	{
		if (*a <= '9' && *a >= '0')return 1;
	}
	while (*a++);
	return 0;
}/* 1 num included, 0 no num */

int cap(char* a){
	do
	{
		if (*a <= 'Z' && *a >= 'A')return 1;
	}
	while (*a++);
	return 0;
}/* 1 num cap, 0 no cap */

int safe(char *a){
	int n = 0;
	char *psw = a;
	while (*a++)n++;
	if (n < 6){
		if (num(psw) == 0){
			if (cap(psw) == 0){
				printf("shorter then 6\nno number\nno capital letter\n");
				return 0;
			}
			else {
				printf("shorter then 6\nno number\n");
				return 0;
			}
		}	
		else {
			if (cap(psw) == 0){
				printf("shorter then 6\nno capital letter\n");
				return 0;
			}
			else {
				printf("shorter then 6\n");
				return 0;
			}
		}
	}	
	else {
		if (num(psw) == 0){
			if (cap(psw) == 0){
				printf("no number\nno capital letter\n");
				return 0;
			}
			else {
				printf("no number\n");
				return 0;
			}
		}
		else {
			if (cap(psw) == 0){
				printf("no capital letter\n");
				return 0;
			}
			else {
				printf("safe\n");
				return 1;
			}
		}
	}	
}/* 1 safe, 0 not safe */
main()
{
	char id[32], psw[31];
	gets(id);
	gets(psw);
	while (safe(psw) == 0)
	{
		gets(psw);
	}
}