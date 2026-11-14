#include <stdio.h>
#include <stdlib.h> 

int main() {
    // Declaramos las variables 
    int n = 0;
    int es_par_positivo = 0;
    int diferencia = 0;
    int valor_absoluto = 0;

    // entrada de datos
    printf("--- DATOS DE ENTRADA ---\n");
    printf("Ingrese un numero entero (n): ");
    scanf("%d", &n);
    // hacemos los calculos pedidos 
    es_par_positivo = (n > 0) && (n % 2 == 0);
    diferencia = n - (n * 2);
    valor_absoluto = abs(diferencia);

    // Identificación explícita de la información de salida
    printf("\n--- INFORMACION DE SALIDA ---\n");
    if (es_par_positivo) {
        printf("El numero %d es PAR y POSITIVO.\n", n);
    } else {
        printf("El numero %d NO cumple con la condicion de ser par y positivo.\n", n);
    }
     printf("El valor absoluto de la diferencia calculada es: %d\n", valor_absoluto);

    return 0;
}