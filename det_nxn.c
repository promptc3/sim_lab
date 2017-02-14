/*Program to calculate a determinant of nxn matrix using gauss elimination*/

#define MAX 50
#include <stdio.h>

void upper_triangle(float * array[MAX][MAX]);
int rows,column;
float array[MAX][MAX];

void main()
{
	scanf("%d %d",&rows,&column);
    for (int i = 0; i < rows; ++i)
    	for (int j = 0; j < column; ++j)
    	{
    		scanf("%f",&array[i][j]);
    	}
 
upper_triangle(&array);
/*determinant(upper_triangle);*/
    
    	
}

void upper_triangle(float * array[rows][column]){
	 for (int i = 0; i < rows; ++i)
    	for (int j = 0; j < column; ++j)
    	{
    		printf("%0.2f",array[i][j]);
    	}

}