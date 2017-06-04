#include "cms.h"

void testA()
{
	//sample heap
	int bitmap[10] = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1};

	struct node *heap[10] = {(struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node))};

	heap[0]->item = 20; heap[0]->next = heap[1];
	heap[1]->item = 21; heap[1]->next = heap[2];
	heap[2]->item = 22; heap[2]->next = heap[5];
	heap[3]->item = 23; heap[3]->next = NULL;
	heap[4]->item = 24; heap[4]->next = NULL;
	heap[5]->item = 25; heap[5]->next = heap[1];
	heap[6]->item = 26; heap[6]->next = heap[7];
	heap[7]->item = 27; heap[7]->next = NULL;
	heap[8]->item = 28; heap[8]->next = heap[9];
	heap[9]->item = 29; heap[9]->next = NULL;
	int roots[2] = {0, 6};

	printf("\nINITIAL\n");
	printstatus(bitmap, heap, 10);
	cms(bitmap, heap, 10, roots, 2);
	printf("\nFINAL\n");
	printstatus(bitmap, heap, 10);
}

void testB()
{
	//sample heap
	int bitmap[10] = {1, 0, 1, 1, 1, 1, 1, 0, 1, 1};

	struct node *heap[10] = {(struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node)),
	(struct node *) malloc(sizeof(struct node)), (struct node *)
	malloc(sizeof(struct node)), (struct node *) malloc(sizeof(struct node))};

	heap[0]->item = 30; heap[0]->next = heap[5];
	heap[1]->item = 31; heap[1]->next = NULL;
	heap[2]->item = 32; heap[2]->next = NULL;
	heap[3]->item = 33; heap[3]->next = heap[8];
	heap[4]->item = 34; heap[4]->next = heap[9];
	heap[5]->item = 35; heap[5]->next = NULL;
	heap[6]->item = 36; heap[6]->next = heap[5];
	heap[7]->item = 37; heap[7]->next = NULL;
	heap[8]->item = 38; heap[8]->next = heap[2];
	heap[9]->item = 39; heap[9]->next = NULL;
	int roots[2] = {3, 6};

	printf("\nINITIAL\n");
	printstatus(bitmap, heap, 10);
	cms(bitmap, heap, 10, roots, 2);
	printf("\nFINAL\n");
	printstatus(bitmap, heap, 10);
}

int main(void)
{
	testA();
	testB();
	return 0;
}
