#include <stdio.h>

int main() {
    // Declaración de variables
    float largo, ancho, alto, volumen, volumen_bono=0;
    int contador_operaciones = 0; 
    // Pedimos los datos al usuario
    printf("Ingrese el largo del prisma: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho del prisma: ");
    scanf("%f", &ancho);
    printf("Ingrese el alto del prisma: ");
    scanf("%f", &alto);

    // evaluamos si lo sdatos son validos 
    if (largo > 0 && ancho > 0 && alto > 0) {
     volumen = largo * ancho * alto;
        contador_operaciones++; 
// Cálculo del bono
        volumen_bono = volumen * 1.5;
        contador_operaciones++; 
//imprimimos los resultados 
        printf("El volumen del prisma es: %.2f\n", volumen);
        printf("El volumen con el bono aplicado es: %.2f\n", volumen_bono);
        printf("Numero total de operaciones realizadas : %d\n", contador_operaciones);
    } else {
        printf("\nError: Las medidas de  largo, ancho y alto deben ser mayores a 0.\n");
    }

    return 0;
}