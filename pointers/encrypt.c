// I have no idea how encrytion works, just a dummy non working encryption program.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *asciit(char *password);
int main()
{
	char passwd[10];
	char text[] = "Agoodcargoeslongdistancesforlongtime";

	printf("Enter Password(Maximum Length 7): ");
	scanf("%s", passwd);

	int *p;
	int array[strlen(passwd)];
	int l = 0;
	p = asciit(passwd);
	while(*p != 0)
	{
		*(array+l) = *(p+l);
		l++;
		p++;
	}
	int *hash;
	hash = asciit(text);
	for(int j=0; j < strlen(text); j++)
	{
		for(int c=0; c < strlen(passwd); c++)
			printf("%d", *(hash+j) + *(array+c));
      printf("\n");
	}
}

int *asciit(char *pswd)
{
	static int a[10];
	int i;
	while(*pswd != '\0')
	{
		*(a+i) = *(pswd+i);
		i++;
		pswd++;
	}
	return (int*)a;
}
