#include <stdio.h>

int main() {
	int n;
	int i;

	printf("Insira um n�mero positivo:");
	scanf("%i", &n);

	for (i = 2; i <= n; i += 2) printf("%i\n", i);
	
	return 0;	
}

