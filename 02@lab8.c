#include<stdio.h>
#include<stdlib.h>
void func1(char *a){
	char *p = a;
	while (*p)
	{
		if (*p >= 'a' && *p <= 'x')*p += 2;
		else if (*p == 'y')*p = 'a';
		else if (*p == 'z')*p = 'b';
		else if (*p >= 'A' && *p <= 'X')*p += 2;
		else if (*p == 'Y')*p = 'A';
		else if (*p == 'Z')*p = 'B';
		else if (*p >= '0' && *p <= '9')*p = '0' + '9' - *p;
		p++;
	}
}
main()
{
	int i, n;
	char *a;
	scanf("%d", &n);
	a = (char*)malloc((n + 1) * sizeof(char));
	if (a)
	{
		gets(a);
		func1(a);
		puts(a);
	}
	else printf("RAM insufficient\n");
	free(a);
}