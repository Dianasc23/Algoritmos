#include <stdio.h>

int main() {
    char contraseñaCorrecta[20] = "Diana";
    char contraseña[20]; 
    int contador = 0;

    do {
        printf("Ingrese la contraseña: ");
        scanf("%s", contraseña);

        if (strcmp(contraseña, contraseñaCorrecta) == 0) {
            printf("Acceso concedido\n");
        }else{
            contador += 1;
        }

    } while (contador < 3 && strcmp(contraseña, contraseñaCorrecta) != 0);

    if (contador == 3) {
        printf("Acceso denegado\n");
    }

    return 0;
}
