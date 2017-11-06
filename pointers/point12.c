/* strings and pointers
 * with strings, pointers operate character by character
 * it never operates on a string as a whole
 * strings are array of characters
 * and always ends with '\0'(ASCII = 0)
 */

#include<stdio.h>
int main()
{
	char s[] = "String";
	char *name = "DatSleepyGuy";
	char n[10];

	printf("%s ",s);
	printf("%s\n", name);
	printf("Enter any name:");
	scanf("%s",n);
	printf("%s\n",n);
}
// And that is how a string do...
