#include <stdio.h>

int main() {
  int vetA[20];
  int vetB[20];
  int vetF[20];
  int i;

  for (i = 0; i < 20; i++) {
    printf("Vetor A, posicao %i\n", i + 1);
    scanf("%i", &vetA[i]);
    printf("Vetor B, posicao %i\n", i + 1);
    scanf("%i", &vetB[i]);

    vetF[i] = (i + 1) % 2 == 0 // é par?
      ? vetA[i]
      : vetB[i];
  }

  for (i = 0; i < 20; i++) {
    printf("Vetor F, posicao %i = %i\n", i + 1, vetF[i]);
  }

  return 0;
}
