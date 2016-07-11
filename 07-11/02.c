#include <stdio.h>

// Comparar duas strings
int compareStr (char* foo, char* bar) {
	unsigned int i;

	for (i = 0; i < sizeof(foo); i++) {
		if (foo[i] != bar[i])
			return 0;
	}

	return 1;
}

int main() {
	char foo[100], bar[100];

	printf("Defina a palavra A\n");
	fgets(foo, 100, stdin);

	printf("Defina a palavra B\n");
	fgets(bar, 100, stdin);

	printf(
		compareStr(foo, bar) ?
			"São iguais\n" :
			"São diferentes\n"
	);
}
