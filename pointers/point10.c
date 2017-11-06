// passing a 3d array to a function

#include<stdio.h>

int main()
{
	int i,j,k;
	int a[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,3,2,1}},{{2,3,5,7},{4,3,9,2},{1,6,3,6}}};

	display( a, 2, 3, 4 );
}

display ( int *q, int x, int y, int z )
{
	int i,j,k;
	for (i=0; i<x; i++)
	{
		for (j=0; j<y; j++)
		{
			for (k=0; k<z; k++)
			{
				printf("%d ",*(q + i*y*z + j*z + k));
			}
				printf("\n");
		}
				printf("\n");
	}
}
