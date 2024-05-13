#include <stdio.h>

int main(void) {
  int i, num, resultado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  for(i = 1; i <= 10; i++){
    resultado = num *i;
    printf("%d * %d = %d\n",num, i, resultado);
  }
  return 0;
}
