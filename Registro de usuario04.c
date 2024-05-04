#include <stdio.h>

int main(void) {
  char nombre[10], respuesta[5];
  int edad;
  printf ("Ingrese su nombre: ");
  scanf ("%s", nombre);
  printf("Ingrese su edad: ");
  scanf("%d", &edad);
  printf("Es estudiante?");
  scanf("%s", &respuesta);
  if (strcmp(respuesta, "si") == 0) {
    printf ("Bienvenido %s le ofecemos un descuento especial", nombre);

  }else{
    printf ("Bienvenido %s lamentablemente no le ofreceremos un descuento", nombre);
  }
  return 0;
}