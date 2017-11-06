/* real food for thought */
// array[i] refers to the ith elemnt of array
// and so does *(array + i)
// which means *(array + 0) will return 0th element of array
// infact when we type array[i], C compiler interprets it as *(array + i)
// *(array + i), *(i + array), i[array], array[i] are the same thing.(mind = blown)

#include<stdio.h>
main()
{
	int arry[]={12, 13, 14, 15, 16};
  int i;
	for(int i=0; i<5; i++){
		printf("%d \n",*(arry + i));
	}}
