#include<stdio.h>
#include<math.h>
//Definimos las variables 
void main(){
    int div=2;
     float  prom=0.0; 
     float potencia=0.0;
     float num_1=0.0;
     float  num_2=0.0;
//Pedimos los datos al usuario
    printf("ingrese el primer numero: \n");
    scanf("%f", &num_1);

    printf("Ingrese el segundo numero ");
    scanf("%f", &num_2);
//hacemos los calculos correspondientes 
    prom =(num_1 +num_2)/div ;
    if(prom > 0){
        printf("El promedio calculado es : %.2f\n", prom);
        potencia= pow(prom,4);
        printf("El resultado elevado a la 4 es: %.2f\n", potencia);
    }else{
        printf("Los datos ingresados son invalidos para sacar un promedio.\n");

    }
    //Imprimimos el proposito
    printf("El proposito de este algoritmo es sacra el promedio entre dos numeros reales. \n");
}