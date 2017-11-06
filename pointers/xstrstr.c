// again a shitty implementation of strstr from string library

#include<stdio.h>

int main()
{
	char line[100] = "I wrote this line so that I don't need to initialise it again and again";
	char word[10] = "this";
	char *p;
	char *xstrstr(char *string, char *substring);
	p = xstrstr(line, word);
	printf("c=%c \n", *p);
}

char *xstrstr(char *str, char *substr)
{
	int i = 0;
	int j = 0;
	while(*(str+i) != '\0' || *(substr+j) != '\0')
	{
		if(*(str+i) == *(substr+j))
		{
			i++;
			j++;
		}
		else
			i++;
	}
	printf("j=%d ", j);
	return (char*)substr;
}
