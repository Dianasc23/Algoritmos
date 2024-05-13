#include <stdio.h>

int main(void) {
  int num, contado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  contado = 0;
  do {
    if (num > 0) {
      contado = contado + 1;
    }
    printf("Ingrese otro numero: ");
    scanf("%d", &num);
  } while (num != 0);
  printf("En total hay %d numeros positivos", contado);
  return 0;
}