#include <stdio.h>

typedef struct person {
	char name[20];
	int age;
	int male;
} person;

int main() {
	struct person people[10];

	int i, count_males = 0;
	for (i = 0; i < 10; i++) {
		printf("Nome da pessoa %i\n", i + 1);
		scanf("%s", people[i].name);

		printf("Idade da pessoa %i\n", i + 1);
		scanf("%i", &people[i].age);

		printf("Genero (0 = feminino / 1 = masculino) %i\n", i + 1);
		scanf("%i", &people[i].male);

		if (people[i].male) {
			count_males++;
		}
	}

	printf("Pessoas do gênero masculino: %i\n", count_males);
	printf("Pessoas do gênero feminino: %i\n", 10 - count_males);

	return 0;
}

