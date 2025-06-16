#include "list.h"

Node* create_node(int data) {
	Node* new_node = malloc(sizeof(Node));
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
}

void append(Node** head_ref, int data) {
	Node* new_node = create_node(data);
	if (!*head_ref) {
		*head_ref = new_node;
		return;
	}
	Node* temp = *head_ref;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

void print_list(Node* head) {
	while (head) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main() {
	Node* head = NULL;
	append(&head, 4);
	append(&head, 3);
	append(&head, 1);
	append(&head, 5);
	append(&head, 2);

	printf("Before sort: ");
	print_list(head);

	head = mergeSort(head);

	printf("After sort: ");
	print_list(head);

	return 0;
}
