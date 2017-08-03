#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stob(char *num[34], int n){
	int i, j;
	char **t;
	for (j = 0; j < n; j++)
		for (i = 0; i < n - j - 1; i++)
			if (strcmp(num[i], num[i + 1]) > 0)
			{
				t = num[i];
				num[i] = num[i + 1];
				num[i + 1] = t;
			} 
}
main()
{
	int n/* 省份个数 */, i, l/* 省份的字符数 */, j;
	char *num[34], *res;
	printf("请输入省份的个数\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
loop:printf("请输入省份的字符数及省份拼音\n");
		scanf("%d", &l);
		num[i] = (char*)malloc((l + 1) * sizeof(char));
		if (num[i])
			gets(num[i]);
		else 
		{
			printf("fail\n");
			goto loop;
		}
	}
	stob(num, n);
	for (i = 0; i < n; i++)
		puts(num[i]);
	for(i = 0; i < n; i++)
		free(num[i]);
}
