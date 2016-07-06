#include <stdio.h>
#include <math.h>

int toBase(int x, int base) {
	char result[64];
	int i = 0;
	int bit;
	int count = 0;

	while (x > 0) {
		if (x == 1) bit = 1;
		else bit = (x % base);

		result[i] = "0123456789ABCDEF"[bit];

		x /= base;
		i++;
		count++;
	}

	for (i = count - 1; i >= 0; i--) {
		printf("%c", result[i]);
	}
}

int main() {
	int x;

	printf("Escreva um numero em base 10\n");
	scanf("%i", &x);

	printf("bin ");
	toBase(x, 2);
	printf("\noct ");
	toBase(x, 8);
	printf("\nhex ");
	toBase(x, 16);
	printf("\n");
}
