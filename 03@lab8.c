#include<stdio.h>
#include<stdlib.h>
void func2(char *a){
	char *p = a;
	while (*p)
	{
		if (*p >= 'c' && *p <= 'z')*p -= 2;
		else if (*p == 'a')*p = 'y';
		else if (*p == 'b')*p = 'z';
		else if (*p >= 'C' && *p <= 'Z')*p -= 2;
		else if (*p == 'A')*p = 'Y';
		else if (*p == 'B')*p = 'Z';
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
		func2(a);
		puts(a);
	}
	else printf("RAM insufficient\n");
	free(a);
}