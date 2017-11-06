/* returning a 2-d array from function 
 * there are like three or four ways but here is
 * one I consider better than others.*/

#include<stdio.h>
#define ROW 3
#define COL 3

int main()
{
	int *fun1();
	int *a;
	a = fun1();
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			printf("%d ",*(a + i*ROW + j));
		}
	}
}

int *fun1()
{
	static int arry[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
	return (int*)arry;
}
		
