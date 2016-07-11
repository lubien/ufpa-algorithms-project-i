#include <stdio.h>

// Contar o número de caracteres de um string
int countStr(char* str) {
	int size = 0;
	int i;

	for (i = 0; i < 100; i++) {
		if (str[i] == '\n')
			return size;

		size++;
	}
}

int main() {
	char input[100];

	printf("Qual sua string?\n");
	fgets(input, 100, stdin);

	printf("Sua string possui %i caracteres\n", countStr(input));

}

