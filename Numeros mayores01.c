#include <stdio.h>

int main() {
  int num1, num2;
  printf  ("Escriba dos numeros: ");
  scanf("%d %d", &num1, &num2);
  if (num1 > num2){
    printf("El numero 1 es mayor");
  }else{
    if(num2 > num1){
      printf("El numero 2 es mayor");
    }else{
      printf("Los numeros son iguales");
    }
  }
  return 0;
}