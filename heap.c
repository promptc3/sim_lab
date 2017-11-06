// Implementation of heap in C

#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
void maxHeapify(int* heapAddress, int heapSize, int index);
void exchange(int* a, int* b);
void buildHeap(int heapSize, int* heapAddress);
void display(int heapSize, int* heapAddress);

int main()
{
	printf("\nImplementation of Heap\n");
	int size, heap[MAX];
	scanf("%d", &size);
	for(int j=0; j<size; j++)
		scanf("%d", &heap[j]);
	buildHeap(size, &heap[0]);
}

int parent(int i) {	return i/2; }
int left(int i) { return 2*i; }
int right(int i) { return 2*i + 1; }

/* max-heap property: parent >= child
 * left-child > right-child
 */

void display(int size, int* h)
{
	for(int j=0; j<size; j++)
		printf("%d ", *(h+j));
	printf("\n");
}

void exchange(int* a, int* b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

void maxHeapify(int* heapAddress, int heapSize, int index)
{
	int *h;
	h = heapAddress;
	int l = left(index);
	int r = right(index);
	int max;
	if (l <= heapSize && *(h+l) >= *(h+index))
		max = l;
	else
		max = index;
	if (r <= heapSize && *(h+r) >= *(h+max))
		max = r;
	if (max != index)
	{
		exchange(h+max, h+index);
		maxHeapify(h, heapSize, max);
	}
}

void buildHeap(int size, int *h)
{
	for(int j=size/2; j>=1; j--)
		maxHeapify(h, size, j);
	display(size, h);
}
