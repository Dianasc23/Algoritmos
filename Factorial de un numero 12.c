#include <stdio.h>

int main(void) {
  int num, factorial, contado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  factorial = 1;

  for(contado =  num; contado >= 1; contado--){
    factorial = factorial * contado;
  }
  printf("El factorial de %d es: %d ",num,factorial);
  return 0;
}