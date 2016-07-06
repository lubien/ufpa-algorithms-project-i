#include <stdio.h>

int factorial(int n) {
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}

int main() {
	int n = -1;
	
	do {
		printf("Insira um número não negativo:");
		scanf("%i", &n);
	} while (n < 0);
	
	printf("%i", factorial(n));
}

