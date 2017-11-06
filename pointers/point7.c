/* passing an array to a function */
/* passing an array through reference is always faster than using a subcript */
/* although for the sake of redability when no logic is involved in passing the value use subscript */

#include<stdio.h>
int main()
{
	int num[]={12, 13, 14, 15, 16};
	show(&num[0], 5);
}

show( int *n, int j)
{
	int i=1;
	while( i <= j )
	{	
		printf("%d ",*n);
		i++;
		n++;
	}
}
