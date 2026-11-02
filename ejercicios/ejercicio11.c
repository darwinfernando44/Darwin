#include <stdio.h>
#include <stdbool.h>

int main(){

    float pi = 3.1416;
    char y = ' ';
    char cons_1 = 'A';
    char cons_2 = 'Z';
    float prod_pi = 0.0;
    bool verdadero = true;

    printf(" Porfavor escribe un caracter desde tu teclado: ");
    scanf("%c", &y);

    if (y >= cons_1 && y <= cons_2){
        verdadero = true;
    }else{
        verdadero = false;
    }

    
    if (verdadero == true) {
        prod_pi = pi * 1;
    }else{
        prod_pi = pi * 0;
    }

    if(verdadero){
        printf("El caracter ingresado es mayuscula\n");
    }else{
        printf("El caracter ingresado no es mayuscula\n");
    }
    
    printf("El producto de pi por el valor booleano es:%.2f\n", prod_pi);
    printf("Para la operacion realizada de tomo el valor de verdadero= 1 y falso= 0\n");

    return 0;
}