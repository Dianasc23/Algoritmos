#include <stdio.h>

int main(void) {
  float celsius, fahrenheit, kelvin;
  printf("Cual es la temperatura en Celsius?");
  scanf("%f", &celsius);
  fahrenheit = ((celsius * 9)/5) + 32;
  kelvin = celsius + 273.15;
  printf("La temperatura es: %.2f °C\n %.2f °F\n %.2f °K\n", celsius, fahrenheit, kelvin);
  return 0;
}