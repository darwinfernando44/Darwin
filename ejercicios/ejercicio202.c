#include <stdio.h>

int main() {
    // Declaración de variables enteras
    int z, s, val1, promedio, cubo;
// pedimos datos de entrada 
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);
    printf("Ingrese el valor de s: ");
    scanf("%d", &s);
    printf("Ingrese el valor de val1: ");
    scanf("%d", &val1);

    // Cálculo el promedio 
    promedio = (z + s + val1) / 3;

    // Evaluación de la expresión lógica 
    if (promedio > 0) {
        // Cálculo adicional: resultado elevado al cubo
        cubo = promedio * promedio * promedio;
  // Salida de resultados
        printf("El promedio es: %d\n", promedio);
        printf("El promedio elevado al cubo es: %d\n", cubo);
    } else {
        printf("los datos ingresados dan un promedio invalido. \n");
    }

    return 0;
}