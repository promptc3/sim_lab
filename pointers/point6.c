/* addition and subtraction around pointers */
#include<stdio.h>
int main()
{
int i=4, *j, *k;
j = &i;
j = j + 1;
k = j - 6;
printf("j=%u k=%u",j,k);
}
