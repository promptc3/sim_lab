/* demonstration of call by value */
#include<stdio.h>
int main(){
	int i;
	int marks[]={55, 65, 75, 56, 78, 90};

	for( i=0; i<=5; i++){
		display( marks[i] );
}
}
display ( int m )
{
	printf("%d\n",m);
}
