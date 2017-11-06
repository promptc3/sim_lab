/* Implementation of single-linked list */

#include<stdlib.h>
#include<stdio.h>

typedef int(*COMPARE)(void*, void*);
typedef int(*DISPLAY)(void*);
typedef struct _node
{
	void *data; // by using void as data type, user can hold any type of data
	struct _node *next;
}Node;

typedef struct _list
{
	Node *head;
	Node *link;
	Node *tail;
}List;

int main()
{
	printf("\nImplementation of Single-Linked List\n");
	void initList(List *list);
	void addHead(List *list, void*);
	void addTail(List *list, void*);
	void delete(List *list, Node*);
	Node* getNode(List *list, COMPARE, void*);
	void displayList(List *list, DISPLAY);
}

void initList(List *l)
{
	l->head = NULL;
	l->tail = NULL;
	l->link = NULL;
}

void addHead(List *l, void *d)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = d;
	if (l->head == NULL)
		// check whether the list is empty
	{
		l->tail = node;
		node->next = NULL;
	}
	else // assign the next to current list head
		node->next = l->head;

	l->head = node;
}

void addTail(List *l, void *d)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = d;
	node->next = NULL;
	// check if linked list is empty
	if (l->head == NULL)
		l->head = node;
	else
		l->tail->next = node;
	l->tail = node;
}

/* Refer Figure-6.6 at Page 146 of Understanding and Using Pointers in C by Richard Reese
 * -------------------------------------------------------------------------------------
 */


/* Since to delete a node, the user will pass data to function
 * to get the pointer to node containing that data we will write
 * a function called getNode which will return pointer to node
 * containing that data
 */


Node* getNode(List *l, COMPARE compare, void *d) // write any COMPARE function as needed
{
	Node *node = l->head;
	while (node != NULL)
	{
		if (compare(node->data, d) == 0)
			return node;
		node = node->next;
	}
	return NULL;
}

void delete(List *list, Node* n)
{
	if (n == list->head)
	{
		if (list->head->next == NULL)
			list->head = list->tail = NULL;
		else
			list->head = list->head->next;
	}
	else
	{
		Node *tmp = list->head;

		/* tmp != NULL ensures that tmp is not a null value
		 * we traverse the list using tmp pointer
		 * tmp->next != n ensures that the tmp doesn't moves
		 * on the node to be deleted, since it has to be before it
		 */

		while (tmp != NULL && tmp->next != n)
			tmp = tmp->next;
		if (tmp != NULL)
			tmp->next = n->next;
	}
	free(n);
}

/* This is how delete function is invoked using getNode function
 * Node *badnode = getNode(&List, (int (*)(void*, void*))compareStuff, somstuff);
 * delete(&linkedList, badnode);
 * Refer Pg 149 Fig 6.7 Richard Reese for illustration */

void displayList(List *l, DISPLAY display)
{
	printf("\nSingle-linked List\n");
	Node *current = l->head;
	while (current != NULL)
	{
		display(current->data);
		current = current->next;
	}
}

/* Implementation of Queue using Linked List
 * Refer Pg 151 Fig 6.8 of Richard Reese */

typedef List Queue;

void initQueue(Queue *q)
{
	initList(q);
}

void enqueue(Queue *q, Node *n)
{
	addHead(q, n);
}

void *dequeue(Queue *q)
{
	Node *tmp = q->head;
	void *data;
	if (q->head == NULL)
		data = NULL;
	else if (q->head == q->tail)
	{
		q->head = q->tail = NULL;
		data = tmp->data;
		free(tmp);
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		q->tail = tmp;
		tmp = tmp->next;
		q->tail->next = NULL;
		data = tmp->data;
		free(tmp);
	}
	return data;
}

/* Imlementation of Linked List as Stack */

typedef List Stack;

void initStack(Stack *stack)
{
	initList(stack);
}

void push(Stack *stack, void *data)
{
	addHead(stack, data);
}

void *pop(Stack *stack)
{
	Node *tmp = stack->head;
	if (tmp == NULL)
		return NULL;
	else if (tmp == stack->tail)
	{
		stack->head = stack->tail = NULL;
		void *data = tmp->data;
		free(tmp);
		return data;
	}
	else
	{
		stack->head = stack->head->next;
		void *data = tmp->data;
		free(tmp);
	  return data;
	}
}
