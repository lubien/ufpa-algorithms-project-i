#include <stdio.h>

int main() {
  float v_conta, pagar;
  int idade;

  printf("Qual a sua idade?\n");
  scanf("%i", &idade);
  printf("Qual o valor da sua conta?\n");
  scanf("%f", &v_conta);

  if (v_conta > 300) {
    pagar = v_conta * 0.75;
  } else if (v_conta <= 300 && v_conta >= 100 && idade > 50) {
    pagar = v_conta * 0.85;
  } else {
    pagar = v_conta;
  }

  printf("Voce deve R$%.2f\n", pagar);
  return 0;
}
