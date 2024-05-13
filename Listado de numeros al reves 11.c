#include <stdio.h>

int main(void) {
  int num, contado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);

  for(contado = num; contado >= 1; contado--){
    printf("Los numeros descendentes son: %d\n ", contado);
  }
  return 0;
}