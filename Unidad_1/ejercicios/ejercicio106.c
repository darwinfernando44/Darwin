#include <stdio.h>

void main() {
    // Declaracmos las variables y la constante 
    
    const float ONZA_GRAMO = 28.3495;
   float onzas, gramos, mitad_gramos;
// Propósito del algoritmo
    printf("Este programa calcula la equivalencia de un peso dado en onzas a gramos,\n");
// pedimos los datos 
    printf("Ingrese el peso en onzas: ");
    scanf("%f", &onzas);
 // Hacemos el proceso 
    gramos = onzas * ONZA_GRAMO;
    mitad_gramos = gramos / 2.0;
 // Evaluamos si gramos es mayor a 0
    if (gramos > 0) {
        printf("\nResultados:\n");
        printf("%.2f onzas equivalen a %.4f gramos.\n", onzas, gramos);
        printf("La mitad del resultado en gramos es: %.4f\n", mitad_gramos);
    } else {
        printf("\nEl peso ingresado debe ser mayor a 0.\n");
    }
}