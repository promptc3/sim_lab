#include <stdio.h>
int array[7] = {3,2,8,5,5,24,11};
int i,smallest,key;
void main(){
printf("Numbers in the array are: \n");
for(i=0;i<6;i++)
{
printf("%d\n",array[i]);
}
smallest = array[0];
key = 0;
for(i=0;i<7;i++)
{
 if(smallest >= array[i])
  smallest = array[i];
  

 
}
printf("smallest number in the predefined array is at: %d\n",key);
}
