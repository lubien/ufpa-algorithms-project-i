#include <stdio.h>

// Cut strings
int rmv_cadeia(char* original, int cutStart, int cutCount) {
	char result[sizeof(original)];
	int i;
	int j;

	for (i = 0, j = 0; i < sizeof(original); i++) {
		if (i < (cutStart - 1) || i > (cutStart + cutCount - 1)) {
			original[j] = original[i];
			j++;
		} else {
			original[i] = ' ';
		}
	}
}

int main () {
	char original[100];
	int cutStart;
	int cutCount;

	printf("Qual sua string?\n");
	fgets(original, 100, stdin);

	printf("Cortar a partir de qual caracter?\n");
	scanf("%i", &cutStart);

	printf("Cortar quantos caracteres?\n");
	scanf("%i", &cutCount);

	rmv_cadeia(original, cutStart, cutCount);

	printf("Resultado: %s\n", original);
}

