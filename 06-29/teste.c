#include <stdio.h>

void troca(int *p, int *q) {
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

int main() {
	int a = 5;
	int b = 10;

	printf("%i - %i\n", a, b);
	troca(&a, &b);
	printf("%i - %i\n", a, b);
}

