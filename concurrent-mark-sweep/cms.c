#include "cms.h"

void cms(int bitmap[], struct node *heap[], int n, int roots[], int r)
{
	int i;
	unmarkAll(heap, n);
	for (i = 0; i < r; i++)
		mark(heap[roots[i]], heap);
	sweep(bitmap, heap, 10);
}

void mark(struct node *p, struct node *heap[])
{
	if (p->marked == 0)
	{
		p->marked = 1;
		if (p->next != NULL)
			mark(p->next, heap);
	}
}

void sweep(int bitmap[], struct node *heap[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (bitmap[i] == 1)
		{
			if (heap[i]!=NULL && heap[i]->marked == 1)
				heap[i]->marked = 0;
			else
			{
				free(heap[i]);
				bitmap[i] = 0;
			}
		}
	}
}

void printstatus(int bitmap[], struct node *heap[], int n)
{
	int i;
	printf("\nBitmap:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", bitmap[i]);
	printf("\n\nHeap:\n");
	for (i = 0; i < n; i++)
	{
		if (bitmap[i] == 1)
			printf("%d\t", heap[i]->item);
		else
			printf("--\t");
	}
	printf("\n\n");
}

void unmarkAll(struct node *heap[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		heap[i]->marked = 0;
}
