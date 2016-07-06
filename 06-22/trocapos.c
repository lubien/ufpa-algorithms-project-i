#include <stdio.h>

int main() {
  int vet[16];
  int i, temp;

  for (i = 0; i < 16; i++) {
    printf("Posicao %i\n", i + 1);
    scanf("%i", &vet[i]);
  }

  for (i = 0; i < 8; i++) {
    temp = vet[i + 8];
    vet[i + 8] = vet[i];
    vet[i] = temp;
  }

  for (i = 0; i < 16; i++) {
    printf("Posicao %i = %i\n", i + 1, vet[i]);
  }

  return 0;
}
