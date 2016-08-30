#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	struct Node* prev;
	struct Node* next;
};

void unshift(struct Node** node, int value) {
	struct Node* current = *node;
	struct Node* new = (struct Node*) malloc(sizeof(struct Node));
	new->value = value;

	while (current->prev != NULL) {
		current = current->prev;
	}

	current->prev = new;
	new->next = current;
	current = new;
}

void push(struct Node** node, int value) {
	struct Node* current = *node;
	struct Node* new = (struct Node*) malloc(sizeof(struct Node));
	new->value = value;

	while (current->next != NULL) {
		current = current->next;
	}

	new->prev = current;
	current->next = new;
}

void insert(struct Node** node, int at, int value) {
	struct Node* current = *node;
	struct Node* new = (struct Node*) malloc(sizeof(struct Node));
	new->value = value;
	int currentIdx = 0;

	while (current->prev != NULL) {
		current = current->prev;
	}

	while(current->next != NULL && ++currentIdx < at) {
		current = current->next;
	}

	struct Node* after = current->next;
	new->next = after;
	new->prev = current;
	current->next = new;
	after->prev = new;
}

void shift(struct Node** node) {
	struct Node* current = *node;

	while (current->prev->prev != NULL) {
		current = current->prev;
	}

	free(current->prev);
	current->prev = NULL;
}

void pop(struct Node** node) {
	struct Node* current = *node;

	while (current->next->next != NULL) {
		current = current->next;
	}

	free(current->next);
	current->next = NULL;
}

void removeAt(struct Node** node, int at) {
	struct Node* current = *node;
	int currentIdx = 0;

	while (current->prev != NULL) {
		current = current->prev;
	}

	while(current->next != NULL && currentIdx++ < at) {
		current = current->next;
	}

	struct Node* before = current->prev;
	struct Node* after = current->next;
	free(current);
	before->next = after;
	after->prev = before;
}

void print(struct Node** node) {
	struct Node* current = *node;

	while(current->prev != NULL) {
		current = current->prev;
	}

	do {
		printf("%d ", current->value);
	} while ((current = current->next));
	printf("\n");
}

void printLeft(struct Node** node) {
	struct Node* current = *node;
	do {
		printf("%d ", current->value);
	} while ((current = current->prev));
	printf("\n");
}

void printRight(struct Node** node) {
	struct Node* current = *node;
	do {
		printf("%d ", current->value);
	} while ((current = current->next));
	printf("\n");
}

int main() {
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->value = 1;

	print(&node);

	printf("push(2); push(3);\n");
	push(&node, 2);
	push(&node, 3);
	print(&node);

	printf("unshift(0); unshift(-1);\n");
	unshift(&node, 0);
	unshift(&node, -1);
	print(&node);

	printf("pop();\n");
	pop(&node);
	print(&node);

	printf("shift();\n");
	shift(&node);
	print(&node);

	printf("insert(1, 100);\n");
	insert(&node, 1, 100);
	print(&node);

	printf("removeAt(2);\n");
	removeAt(&node, 2);
	print(&node);

	return 0;
}
