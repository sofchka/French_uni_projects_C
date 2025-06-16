#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
} Node;

Node*	create_node(int data);
void	append(Node** head_ref, int data);
void	print_list(Node* head);
Node*	mergeSort(Node* head);

#endif