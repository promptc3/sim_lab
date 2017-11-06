// program to remove any non alphabetic or numerical char from a string

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void strptxt(char *string, char *new_string);
int main()
{
	char text[] = "Imperial Palace. Rome. Attention Julias  Caesar.Dear Caesar.Stay   Awake";
	char new_text[70];
	char newline;
	printf("old string = %s\n",text);
	strptxt(new_text, text);
}

void strptxt(char *t, char *txt)
{
	int i = 0;
	while(*txt != '\0')
	{
		if(isalpha(*txt))
		{
			*(t+i) = *txt;
		  i++;
			txt++;
		}
		else
			txt++;
	}
	printf("new string = %s\n",t);
}
