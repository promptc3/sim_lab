#include <stdio.h>
int i,j,k,l;

void main()
{
printf("Enter the value of n: ");
scanf("%d",&l);
k = 0;
for(i=1;i<=l;i++){
j = i*i;
k = k + j;
}
printf("Sum of squares from 1 to %d is %d\n",l,k);



}

