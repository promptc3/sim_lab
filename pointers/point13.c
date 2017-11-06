// to be noted, implementation of strcpy

#include<stdio.h>
int main()
{
	char name1[] = "Harsh";
	char name2[] = "Saumyajeet";
	int diff;
	diff = xstrcmp(name1, name2);
	printf("Result of xstrcmp for %s and %s is %d\n",name1,name2,diff);
}

xstrcmp(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		if(*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return (*s1-*s2);
}
