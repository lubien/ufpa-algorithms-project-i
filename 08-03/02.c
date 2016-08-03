#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} node;

int addfim(node *list, node *value) {
	if (list->next != NULL) {
		node *current = list;

		printf("Current %i\n", current->value);
		while (current = current->next) {
			printf("foo\n");
		}

		current->next = value;
	}

	return 0;
}

int main() {
	node *list;
	list->value = 1;

	node *to_add;
	to_add->value = 2;

	addfim(list, to_add);

	return 0;
}
