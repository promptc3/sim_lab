#include <stdio.h>
int array[7] = {3,2,8,5,5,24,11};
int i,greatest;
void main(){
printf("Numbers in the array are: \n");
for(i=0;i<6;i++)
{
printf("%d\n",array[i]);
}
greatest = array[0];
for(i=0;i<6;i++)
{
if(greatest >= array[i])
 greatest = greatest;
else
 greatest = array[i];
}
printf("Greatest number in the predefined array is: %d\n",greatest);
}
