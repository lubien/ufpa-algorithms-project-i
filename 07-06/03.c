#include <stdio.h>

int isDigit(char c[100]){
	unsigned int i;
	for (i = 0; i < sizeof(c); i++) {
		if (c[i] && (c[i] < 48 || c[i] > 57))
			return 0;
	}
	return 1;
}

int main() {
	char input[100];

	printf("Um digito:\n");
	scanf("%s", input);

	printf(
			isDigit(input) ?
				"Eh um digito\n" :
				"Nao eh um digito\n"
	);

	return 0;
}

