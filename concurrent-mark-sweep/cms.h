/*
CMS.h
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int item;
	int marked;
	struct node *next;
};

void printstatus(int [], struct node *[], int);
void cms(int [], struct node *[], int, int [], int);
void mark(struct node *, struct node *[]);
void sweep(int [], struct node *[], int);
void unmarkAll(struct node *[], int);