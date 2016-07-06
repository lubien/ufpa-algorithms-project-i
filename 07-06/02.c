#include <stdio.h>

int main() {
	char input;

	printf("Um digito:\n");
	scanf("%c", &input);

	printf(
			input >= 48 && input <= 57 ?
				"Eh um digito\n" :
				"Nao eh um digito\n"
	);

	return 0;
}

