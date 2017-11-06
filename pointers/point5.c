/* demonstration of call by reference */
#include<stdio.h>
int main()
{
	int i;
	int marks[]={12, 13, 14, 15, 16};

	for(i=0; i<5; i++)
		display(&marks[i]);
}

display( int *m )
{
	printf("%d\n", *m);
}
