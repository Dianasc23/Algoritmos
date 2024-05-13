#include <stdio.h>

int main(void) {
  int num, suma;
  suma = 0;
  do{
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num > 0) {
      suma = suma + num;
    }
  }while(num > 0);
  printf("La suma total es %d de numeros positivos", suma);
  return 0;
}