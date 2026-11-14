#include<stdio.h>

void main(){
    int vocal_min=0;
    int Cuadrado = 0;
    char n=' ';

    printf("Ingrese una vocal minuscula de su teclado: \n");
    scanf(" %c", &n );

    if(n == 'a' || n == 'e' || n== 'i' || n == 'o' || n == 'u'){
        printf("Es una vocal minuscula. \n");
        vocal_min=1;

    }else{
        printf("No es una vocal minuscula: \n");
        vocal_min = 0;
    }
    Cuadrado= vocal_min * vocal_min;
    printf("Si es verdadero valdra 1 si es falso valdra 0. \n");
    printf("EL cuadrado del valor booleano es: %d\n", Cuadrado);

}