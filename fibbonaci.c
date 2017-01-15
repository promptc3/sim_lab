#include <stdio.h>
int i,j,k,l;
int array[20]={};

void main()
{

array[0] = 0;
array[1] = 1;
for(j=2;j<20;j++){
array[j]=array[j-1]+array[j-2];
}
for(i=0;i<20;i++){
printf("%d\\",array[i]);
}
l=0;
for(i=0;i<20;i++){
l=l+array[i];
}
printf("\nSum of fibonacci sequence upto 20 is %d\n",l);

}

