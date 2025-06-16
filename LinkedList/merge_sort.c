#include "list.h"

Node* split(Node* head) {
	Node* slow = head;
	Node* fast = head;

	while (fast && fast->next && fast->next->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	Node* second = slow->next;
	if (second)
		second->prev = NULL;
	slow->next = NULL;
	return second;
}

Node* merge(Node* first, Node* second) {
	if (!first) return second;
	if (!second) return first;

	if (first->data < second->data) {
		first->next = merge(first->next, second);
		if (first->next)
			first->next->prev = first;
		first->prev = NULL;
		return first;
	} else {
		second->next = merge(first, second->next);
		if (second->next)
			second->next->prev = second;
		second->prev = NULL;
		return second;
	}
}

Node* mergeSort(Node* head) {
	if (!head || !head->next)
		return head;

	Node* second = split(head);
	head = mergeSort(head);
	second = mergeSort(second);
	return merge(head, second);
}
