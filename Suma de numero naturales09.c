#include <stdio.h>

int main(void) {
  int num,suma,contador;
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  suma = 0;
  for(contador = 1; contador <= num; contador++){ // El bucle se ejecutará mientras contador sea menor o igual que num
    suma += contador;
  }
  printf("La suma de los %d numeros naturales es: %d ",num, suma);
  return 0;
}