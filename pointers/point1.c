#include<stdio.h>
// guess the answer //
int main(){
	int a, *b, **c, ***d, ****e;
	a=10;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	printf("a=%d b=%p c=%p d=%p e=%p\n",a,b,c,d,e);
	printf("%d %d %d",a,a+*b,**c+***d+****e);
}
