#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
    	struct Node *next;
};

struct Node* insert(struct Node *head, int value) {
    	struct Node *newNode = malloc(sizeof(struct Node));
    	newNode->data = value;
    	newNode->next = head;
    	return newNode;
}

struct Node* delete(struct Node *head, int value) {
    	struct Node *curr = head, *prev = NULL;
    	while (curr != NULL && curr->data != value) {
		prev = curr;
        	curr = curr->next;
    	}
    	if (curr == NULL) {
        	return head;
	}
    	if (prev == NULL) {
        	head = curr->next;
	}
    	else {
        	prev->next = curr->next;
	}
    	free(curr);
    	return head;
}

void printList(struct Node *head) {
    	struct Node *p = head;
    	while (p != NULL) {
        	printf("%d ", p->data);
        	p = p->next;
    	}
    	printf("\n");
}

int main() {
    	struct Node *head = NULL;
    	head = insert(head, 2);
    	head = insert(head, 18);
    	head = insert(head, 27);
    	printList(head);
    	head = delete(head, 27);
	head = delete(head, 18);
    	printList(head);
    	return 0;
}
