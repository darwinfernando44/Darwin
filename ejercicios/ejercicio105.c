#include <stdio.h>
// Declaramos la constante simbólica 
#define CONST_SIMBOLICA 1.0 

int main() {
    // Declaración de variables 
    float cal1, cal2, cal3, suma_total, menor, promedio, resultado_final;

    // Pedimoslos datos 
    printf("Ingrese la primera calificacion: ");
    scanf("%f", &cal1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%f", &cal2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%f", &cal3);

    // hacemos los procesos
    if (cal1 <= cal2 && cal1 <= cal3) {
        menor = cal1;
    } else if (cal2 <= cal1 && cal2 <= cal3) {
        menor = cal2;
    } else {
        menor = cal3;
    }
     suma_total = cal1 + cal2 + cal3;
    promedio = (suma_total - menor) / 2;
     resultado_final = promedio / CONST_SIMBOLICA;
//  Mostramos por pantalla los resultados
    printf("\nEl promedio final de las dos mejores calificaciones es: %.2f\n", promedio);
    printf("El resultado dividido entre la constante simbolica es: %.2f\n", resultado_final);
    printf("La calificacion menor es: %.2f\n",menor);
    printf("La suma de las tres es: %.2f\n",suma_total);

    return 0;
}