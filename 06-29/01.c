#include <stdio.h>

struct book {
	char name[100];
	char author[100];
	int isbn;
	float price;
};

struct book search(struct book books[10], int isbn) {
	int i;
	for(i = 0; i < 10; i++) {
		if (books[i].isbn == isbn)
			return books[i];
	}
}

int main(void) {
	struct book books[10];

	int i;
	for (i = 0; i < 2; i++) {
		printf("Nome do livro %i\n", i + 1);
		scanf("%s", books[i].name);

		printf("Autor do livro %i\n", i + 1);
		scanf("%s", books[i].author);

		printf("ISBN do livro %i\n", i + 1);
		scanf("%i", &books[i].isbn);

		printf("Preco do livro %i\n", i + 1);
		scanf("%f", &books[i].price);
	}

	int findIsbn;
	printf("Qual o ISBN do livro que voce quer buscar?\n");
	scanf("%i", &findIsbn);

	struct book found = search(books, findIsbn);
	printf("Voce buscou o livro %s\n", found.name);
	printf("Escrito por %s\n", found.author);
	printf("ISBN: %i\n", found.isbn);
	printf("Preco: %.2f\n", found.price);

	return 0;
}
