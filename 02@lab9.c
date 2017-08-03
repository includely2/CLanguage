#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stob(int argc, char *argv[]){
	int i, j;
	char **t;
	for (j = 0; j < argc; j++)
		for (i = 1; i < argc - j - 1; i++)
			if (strcmp(argv[i], argv[i + 1]) > 0)
			{
				t = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = t;
			} 
}
void main(int argc, char *argv[])
{
	int i;
	stob(argc, argv);
	for (i = 1; i < argc; i++)
		puts(argv[i]);
}