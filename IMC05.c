#include <stdio.h>

int main() {
  float peso, altura, imc;
  printf("Ingrese su peso:  ");
  scanf("%f", &peso);
  printf("Ingrese su altura en metros: ");
  scanf("%f",&altura);
  imc = peso / (altura * altura);

  if (imc < 18.5){
    printf("El IMC es bajo");
  }else{
    if (imc >= 18.5 && imc <= 24.9){
      printf("El IMC es normal");
    }else{
      if (imc >= 25 && imc <= 29.9){
        printf("El IMC es sobrepeso");
      }else{
        printf("El IMC es obeso");
      }
    }
  }
  return 0;
}