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

void addnomeio(NO **p, int pos, int idade) {
	NO *current = (NO *) malloc(sizeof(NO));
	current->prox = *p;

	int i = 0;

	while (current->prox != NULL && i < pos) {
		current = current->prox;
		i++;
	}

	NO *after = current->prox;

	NO *novo = (NO *) malloc(sizeof(NO));
	novo->idade = idade;
	novo->prox = after;

	current->prox = novo;
}

void addnoinicio(NO **p, int idade) {
	NO *first = (NO *) malloc(sizeof(NO));
	first->idade = idade;
	first->prox = *p;

	*p = first;
}

void removefinal(NO **p) {
	NO *current = NULL;
	current = *p;

	while (current->prox->prox != NULL) {
		current = current->prox;
	}

	free(current->prox);
	current->prox = NULL;
}

void removeini(NO **p) {
	NO *aux = NULL;
	aux = *p;

	if (aux != NULL) {
		aux = aux->prox;
		free(*p);
	}

	*p = aux;
}

void removemeio(NO **p, int pos) {
	NO *current = (NO *) malloc(sizeof(NO));
	current->prox = *p;

	int i = 0;

	while (current->prox != NULL && i < pos) {
		current = current->prox;
		i++;
	}

	NO *after = current->prox->prox;

	free(current->prox);

	current->prox = after;
}

int main() {
	NO *foo = NULL;

	addnofim(&foo, 3);
	addnofim(&foo, 4);
	addnoinicio(&foo, 2);
	addnoinicio(&foo, 1);
	addnofim(&foo, 5);
	addnofim(&foo, 6);
	addnofim(&foo, 7);
	addnofim(&foo, 8);
	removeini(&foo);
	removefinal(&foo);
	addnomeio(&foo, 3, 100);
	addnomeio(&foo, 100, 200);
	addnomeio(&foo, 0, 300);
	removemeio(&foo, 1);

	printList(foo);
}

