#include<stdio.h>

void main(){
   //declaramos las variables 
    float Mon_pro, Des_dia = 0.0;
    char L = 'L';
    char V = 'V';
    float prom_2x1= 0.5;
    float prom_3x2 = 0.67;
    float des_L = 0.90;
    float des_V = 0.85;
    int Umb_cant = 3;
    float des_5 = 0.95;
    char dia= ' ';
    float total = 0;
    float Mon_com = 0.0;
    int can_prod = 0 ;
   //pedimos los datos al usuario
printf("Ingrese el monto de su compra: \n");
scanf(" %f", &Mon_com);
printf("Ingresar la cantidad de productos comprados: \n");
scanf(" %d", &can_prod);
printf("Ingrese la inicial del dia de la semana que compro: \n");
scanf(" %c", &dia);
//comparamos para saber ue tipo de promocion aplica 
if( can_prod >= Umb_cant){
   if(can_prod % 3 == 0){
    printf("La promocion aplicada sera 3x2. \n");
    Mon_pro = Mon_com * prom_3x2;
   }else if(can_prod % 2 == 0){
    printf("La promocion aplicada ser 2x1. \n");
    Mon_pro= Mon_com * prom_2x1;
   }
}else{
printf("no cumple con la cantidad minima para las promociones. \n");
}
//comparamos el dia de la compra
if(dia == L){
    Des_dia= Mon_pro * des_L;
}else if ( dia == V){
    Des_dia = Mon_pro * des_V;
}else{
    Des_dia = Mon_pro * 1;
}
//sacamos el total 
total = Des_dia * des_5;
//escribimos las salidas
printf("El total con la promocion es: %.2f\n", Mon_pro);
printf("El total con descuento de dia es: %.2f\n", Des_dia);
printf("El total a pagar con descuento del 5 porcientoes: %.2f\n", total);
}