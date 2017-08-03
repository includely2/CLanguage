#include<stdio.h>
int cap(char a){
	if (a >= 'A' && a <= 'Z')return 1;
	else return 0;
}/* 1 yes, 0 no */
int lower(char a){
	if (a >= 'a' && a <= 'z')return 1;
	else return 0;
}/* 1 yes, 0 no */
int number(char a){
	switch(a)
	{
		case'0': case'1': case'2': case'3': case'4':
		case'5': case'6': case'7': case'8': case'9':
			return 1;
			break;
		default: return 0;
	}
	
		
}/* 1 yes, 0 no */
main()
{
	int n = 0;
	char c;
	while ((c = getchar()) != '\n')
		if (cap(c) == 0 && lower(c) == 0 && number(c) == 0)n++;
		else continue;
	printf("%d\n", n);
}