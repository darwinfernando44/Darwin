#include <stdio.h>

int main() {
    char n=' ';
    int Cons = 32;
    int s = 0;


    // 1. Leer el carácter
    printf("Ingrese un caracter: ");
    scanf(" %c", &n);

    // 2. Evaluar si es mayúscula ('A' a 'Z')
    if (n >= 'A' && n <= 'Z') {
        // Convertir a minúscula sumando la constante 32
        s = n + Cons;
        printf("Caracter original: %c\n", n);
        printf("Caracter convertido: %c\n",s);
        printf("El valor del caracter convertido : %d\n", s);


        
    } else {
        printf("El caracter ingresado no es una letra mayuscula.\n");
    }

    return 0;
}