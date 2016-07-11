#include <stdio.h>

// Cut strings
int subcadeia(char* original, int cutStart, int cutCount, char* cut) {
	int i;

	for (i = 0; i < cutCount; i++) {
		cut[i] = original[cutStart - 1 + i];
	}
}

int main () {
	char original[100];
	char cut[100];
	int cutStart;
	int cutCount;

	printf("Qual sua string?\n");
	fgets(original, 100, stdin);

	printf("Cortar a partir de qual caracter?\n");
	scanf("%i", &cutStart);

	printf("Cortar quantos caracteres?\n");
	scanf("%i", &cutCount);

	subcadeia(original, cutStart, cutCount, cut);

	printf("Resultado: %s\n", cut);
}

