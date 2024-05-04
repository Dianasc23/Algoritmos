#include <stdio.h>

int main() {
  float montoDeCompra, descuento;
  printf("Cual es el monto de compra? ");
  scanf("%f", &montoDeCompra);
   descuento = montoDeCompra * 0.90;
  


  if (montoDeCompra > 100){
    printf("El total a pagar es %.2f ",descuento);
  }else{
   printf("El total a pagar es %.2f ", montoDeCompra); 
  }
  return 0;
}