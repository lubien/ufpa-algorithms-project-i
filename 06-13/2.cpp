#include <stdio.h>

int main() {
	int sum = 0;
	int i = 10;
	int input;
	
	for (; i; i--) {
		printf("Num %i: \n", 11 - i);
		scanf("%i", &input);
		sum += (int) input;
	}
	
	printf("\n%d", sum / 10);
}
