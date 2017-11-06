#include<stdio.h>
#include<stdlib.h>
int main()
{
	static int *b;
  static int a = 10;
	b = &a;
  printf("b=%d\n", *b);
}
