#include <stdio.h>

void main() {
    // 1. Declarar la variable para guardar la letra o número
    char num1;
    
    // 2. Pedir el dato en pantalla
    printf("Ingrese un caracter: ");
    scanf("%c", &num1);
    
    // 3. Evaluar si es igual a 'M'
    if (num1 == 'M') {
        printf("Es igual a la referencia M\n");
    } else {
        printf("No es igual a M\n");
    }
    
    // 4. Evaluar si es mayúscula (usando la tabla ASCII)
    if (num1 >= 'A' && num1 <= '9') { // (o A y Z)
        // ...
    }
}