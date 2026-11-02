#include <stdio.h>

int main() {
    // Declaramos las variables y las constantes 
    const float PI = 3.14159;
    const float FACTOR = 360.0;
    float radio = 0.0;
    float angulo = 0.0;
    float area_sector = 0.0;
    float cuadrado_area = 0.0;
  // pedimos los datos
    printf("Ingrese el valor del radio: ");
    scanf("%f", &radio);
    printf("Ingrese el valor del angulo : ");
    scanf("%f", &angulo);

    // Evaluamos la expresion
    if (radio > 0 && angulo > 0) {
         area_sector = (PI * radio * radio * angulo) / FACTOR;
        cuadrado_area = area_sector * area_sector;

       
        printf("El area del sector circular es: %.4f\n", area_sector);
        printf("El cuadrado del resultado principal es: %.4f\n", cuadrado_area);

        printf("Radio ingresado: %.2f\n", radio);
        printf("Angulo ingresado: %.2f grados\n", angulo);
    } else {
        printf("\nError: El radio y el angulo deben ser mayores a 0.\n");
    }

    return 0;
}