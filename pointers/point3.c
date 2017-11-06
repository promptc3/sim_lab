#include<stdio.h>
int i=10,j=20,*diff;

main(){
	int i=10,j=20,diff;

	diff=&j-&i;
	printf("address of i=%u address of j=%u\n",&i,&j);
	printf("difference of addresses=%u\n",diff);
}
