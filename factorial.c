#include <stdio.h>
int fact(int x);
int i,j;
void main()
{
printf("Enter a number: ");
scanf("%d",&i);
j = fact(i);
printf("Factorial of %d is %d\n",i,j);
}
int fact(int x)
{
if (x == 1)
 return 1;
else
 return x*fact(x-1);
}
