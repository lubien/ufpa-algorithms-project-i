#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
	int idade;
	struct NO *prox;
} NO;

void printList(NO *current)
{
	printf("[\n");

	while (current != NULL) {
		printf("  %i,\n", current->idade);
		current = current->prox;
	}

	printf("]\n");
}

void addnofim(NO **p, int idade) {
	NO *current, *p2;
	current = *p;

	if (current == NULL) {
		current = (NO *) malloc(sizeof(NO));
		current->idade = idade;
		current->prox= NULL;
		*p = current;
	} else {
		while (current->prox != NULL) {
			current = current->prox;
		}

		p2 = (NO *) malloc(sizeof(NO));
		p2->idade = idade;
		p2->prox = NULL;

		current->prox = p2;
	}
}

void addnoinicio(NO **p, int idade) {
	NO *first = (NO *) malloc(sizeof(NO));
	first->idade = idade;
	first->prox = *p;

	*p = first;
}

int main() {
	NO *foo = NULL;

	addnofim(&foo, 3);
	addnofim(&foo, 4);
	addnoinicio(&foo, 2);
	addnoinicio(&foo, 1);

	printList(foo);
}

