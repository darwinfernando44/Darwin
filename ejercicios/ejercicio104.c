#include <stdio.h>

int main() {
    // Declaración de variables según el tipo de dato solicitado
    float capital, tasa, interes_generado, monto_total=0.0;
    int tiempo=0;
 // Entrada de datos
    printf("Ingrese el capital : \n");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interes anual : \n");
    scanf("%f", &tasa);

    printf("Ingrese el tiempo en anios : \n");
    scanf("%d", &tiempo);

    // Validación para asegurar que los datos ingresados sean válidos 
    if (capital > 0 && tasa > 0 && tiempo > 0) {
        
        // hacer los procesos 
        interes_generado = (capital * tasa * tiempo) / 100.0;
        monto_total = capital + interes_generado;

        printf("\n--- DESGLOSE FINANCIERO ---\n");
        printf("Interes generado: %.2f\n", interes_generado);
        printf("Monto total : %.2f\n", monto_total);

    } else {
        printf("Error: El capital, la tasa y el tiempo deben ser valores mayores a cero.\n");
    }

    return 0;
}