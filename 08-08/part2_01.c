#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[15];
	char section;
	int amount;
	float price;
} product;

#define STOCK_LEN 2

product stock[STOCK_LEN];

int readStock() {
	int i;

	for (i = 0; i < STOCK_LEN; i++) {
		printf("[%i] Nome\n", i + 1);
		scanf("%s", stock[i].name);
		printf("\n");

		printf("[%i] Setor\n", i + 1);
		scanf("%s", &stock[i].section);
		printf("\n");

		printf("[%i] Quantidade\n", i + 1);
		scanf("%i", &stock[i].amount);
		printf("\n");

		printf("[%i] Preço\n", i + 1);
		scanf("%f", &stock[i].price);
		printf("\n");

		system("clear");
	}

	system("clear");

	return 0;
}

int displaySection() {
	char section;

	printf("Setor?\n");
	scanf("%c", &section);

	int i, count_prod = 0;
	for (i = 0; i < STOCK_LEN; i++) {
		if (stock[i].section == section) count_prod++;
	}

	printf("Quantidade de produtos diferentes: %i\n", count_prod);

	system("clear");
}

int amountPaid() {
	int i;
	float total = 0;

	for (i = 0; i < STOCK_LEN; i++) {
		total += stock[i].amount * stock[i].price;
	}

	printf("Total gasto %.2f\n", total);

	system("clear");

	return 0;
}

int main() {
	printf("MENU:\n\n");

	return 0;
}
