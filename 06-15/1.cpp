#include <stdio.h>
#include <math.h>

int toBase(int x, int base) {
	int result = 0;
	int i = 0;
	int bit;
	int tmp;
	
	while (x > 0) {
		if (x == 1) bit = 1;
		else bit = (x % base);
		
		result += bit * pow(10, i);
		x /= base;
		i++;
	}
	
	return result;
}

int main() {
	int x;
	
	printf("Escreva um numero em base 10\n");
	scanf("%i", &x);
	
	printf("bin %i\n", toBase(x, 2));
	printf("oct %i\n", toBase(x, 8));
	printf("hex %i\n", toBase(x, 16));
}

