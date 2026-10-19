#include <stdio.h>
void main(){
    float IVA = 0.15;
    int num_prod = 0;
    float Precio = 0.0;
    float Total = 0.0;
    float subtotal = 0.0;

    // scanf se pone q tipo de dato va a presentar en  la izquierda, % y  f=float lf= double d=intenger s= cadena caracters
    //  u= entero sin signo    x= transforma a int    o= transforma a float
    printf("Porfavor ingresa la cantidad de productos: ");
    scanf("%d", &num_prod);

    printf("Porfavor ingresa el precio: ");
    scanf("%f", &Precio);

    subtotal = num_prod * Precio;
    Total = subtotal + (subtotal * IVA);
// para q salga solo dos decimales o los q quieras, ponemos %.2f
    printf("El valor a pagar es %f \n", Total);
}