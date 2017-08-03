#include<stdio.h>
int main(void)
{
	int a = 0, b = 0, c = 0;
	char d;
	while ((d = getchar()) != '\n')
	{
		if (d >= 'A' && d <= 'Z')a++;
		else if (d >= 'a' && d <= 'z')b++;
		switch (d)
		{
			case '1': case '2': case '3': case '4': case '5':
			case '6': case '7': case '8': case '9': case '0':
				c++;
				break;
		}
	}	
	printf("capital = %d\tlowercase = %d\tdigit = %d\n", a, b, c);
	return 0; 
} 