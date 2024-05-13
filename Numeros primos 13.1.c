#include <stdio.h>

int main(void) {
  int num, resultado, contadorDeResiduos, contado;
  printf("Ingrese un numero: ");
  scanf("%d", &num);

  for(contado = num; contado >= 1; contado--){
    resultado = num % contado;
    printf("%d\n", resultado);
    if(resultado = 0){
      contadorDeResiduos += 1;
    }
  }
  printf("El contador de residuos tiene: %d\n ",contadorDeResiduos);

  if(contadorDeResiduos = 2){
    printf("El numero %d es primo", num); 
  }else{
    printf("El numero %d No es primo", num);
  }
  
  return 0;
}