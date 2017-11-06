#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	time_t t;
	time_t c;
	time_t b = 0x7FFFFFFFFFF;
	while(t)
		t++;
	while(c)
		c++;
	printf("t=%s and c%s and b=c%s\n", ctime(&t),ctime(&c), ctime(&b));
}
