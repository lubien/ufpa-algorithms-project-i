#include <stdio.h>

typedef struct Person {
	int age;
	float salary;
} Person;

typedef struct node {
	Person data;
	struct node *next;
} node;

int main() {
	node p1, p2, p3, p4, p5, *current;

	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = NULL;

	current = &p1;

	int i = 1;
	do {
		printf("Idade da pessoa %i?\n", i);
		scanf("%i", &current->data.age);

		printf("Salário da pessoa %i?\n", i);
		scanf("%f", &current->data.salary);
		i++;
	} while (current = current->next);

	return 0;
}
