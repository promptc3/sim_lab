/* although we can use array of strings
 * but a better and afster way is to use
 * array of pointers to string
 * makes efficient use of memory
 * greater ease of manipulation
 * lemme show u...*/

#include<string.h>
#include<stdio.h>

int main()
{
	char *names[] = {"harsh", "Kumar", "goes", "to", "Germany"};
	char *temp;

	printf("Original: %s %s\n", names[0], names[4]);
	temp = names[0];
	names[0] = names[4];
	names[4] = temp;
	printf("After swap: %s %s\n", names[0], names[4]);
}
