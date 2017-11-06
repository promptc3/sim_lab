// and thus the structures begin

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	struct complex {
		double x;
		double y;
	};

	struct polar {
		double m;
		double d;
	};

	struct polar p1, p2;
	struct complex c1, c2, ans;

	printf("Enter the first number: ");
	scanf("%f %f", &c1.x, &c1.y);
  printf("Enter the second number: ");
	scanf("%f %f", &c2.x, &c2.y);
	ans.x = c1.x + c2.x;
	ans.y = c1.y + c2.y;
	printf("sum of above two number is %0.2f + i%0.2f\n", ans.x, ans.y);
	p1.m = pow((pow(c1.x, 2.0) + pow(c1.y, 2.0)), 0.5);
	p2.m = pow((pow(c2.x, 2.0) + pow(c2.y, 2.0)), 0.5);
	p1.m = tan(c1.x/c1.y);
	p2.m = tan(c2.x/c2.y);
	printf("%0.2f + i%0.2f in radians is %0.2fL%0.2f", c1.x, c1.y, p1.m, p1.d);
}
