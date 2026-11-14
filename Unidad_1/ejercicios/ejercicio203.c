#include <stdio.h>

void main() {
    // declaramos las variables
    const float TASA_CAMBIO = 0.27;
    const float PI = 3.141592;
    float soles = 0.0;
    float dolares = 0.0;
    float producto_pi = 0.0;

    // pedimos el dato 
    printf("Ingrese el monto en soles: ");
    scanf("%f", &soles);

    // Procesos
    dolares = soles * TASA_CAMBIO;

    // Evaluación de si es mayor a 0
    if (dolares > 0) {
        producto_pi = dolares * PI;

        printf("%.2f soles equivalen a %.2f dolares.\n", soles, dolares);
        printf("El producto del resultado en dolares por PI es: %.4f\n", producto_pi);
    } else {
        printf("\nEl monto ingresado debe ser mayor a 0 para realizar la conversion.\n");
    }

}