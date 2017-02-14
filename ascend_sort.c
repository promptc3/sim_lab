#include <stdio.h>
int k,i;
int array[7] = {9,8,11,6,74,14,5};

void main()
{
printf("Given array is: \n");
for(i=0;i<7;i++){
printf("%d\n",array[i]);
}

for(int x=0; x<7; x++)

	{

		int index_of_min = x;

		for(int y=x; y<7; y++)

		{

			if(array[index_of_min]>array[y])

			{

				index_of_min = y;

			}

		}

		int temp = array[x];

		array[x] = array[index_of_min];

		array[index_of_min] = temp;

	}
printf("Array sorted in ascending order is: \n");
for(k=0;k<7;k++)
{
printf("%d\n",array[k]);
}}
  
  



