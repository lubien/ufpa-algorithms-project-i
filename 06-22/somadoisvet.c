#include <stdio.h>

int main() {
  int vet[12];
  int x, y, i;

  printf("Determine o vetor de 12 posicoes\n");
  for (i = 0; i < 12; i++) {
    printf("Posicao %i\n", i + 1);
    scanf("%i", &vet[i]);
  }

  printf("Defina X\n");
  scanf("%i", &x);
  printf("Defina Y\n");
  scanf("%i", &y);

  printf("Sua resposta e %i\n", vet[x] + vet[y]);

  return 0;
}
