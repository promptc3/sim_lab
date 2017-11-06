// shitty implementation of strchr

#include<stdio.h>
#include<string.h>

int main()
{
	char string[20];
	char key;
	char *xstrchr(char *str, char ch);
	char *p;
	scanf("%s %c", string, &key);
	p = xstrchr(string, key);
	if(*p == 0)
		printf("NULL\n");
}

char *xstrchr(char *str, char ch)
{
	int i;
	char *pt;
	pt = str;
	while(*pt != '\0')
	{
		if(*pt == ch)
			printf("Match Found\n");
		pt++;
	}
	return pt;
}
