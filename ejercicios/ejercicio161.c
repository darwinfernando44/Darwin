#include<stdio.h>

void main(){
   //Declaramos las variables
    int punt_E = 1;
    int punt_T = 2;
    int punt_A= 3;
    float bono_vip = 1.5 ;
    float descuento = 0.95 ;
    int multiplicador= 0 ;
    float mont_total = 0.0;
    float Agreg_vip = 0.0;
    int vip = 0 ;
    char tip_pago = ' ';
    float punt_base = 0.0 ;
    float punt_total = 0.0 ;
    float pagar = 0.0 ;


//pedimos el monto total
printf("ingrese el monto total: \n");
scanf(" %f", &mont_total); 

//pedimos la forma de pago que usara 
printf("Ingrese el tipo de pago. \n1 Efectitivo(E). \n2 Tarjeta (T). \n3 App(A)");
scanf(" %c", &tip_pago);

//pedimos saber si es vip o no 
printf("¿Usted es VIP? ingrese 1 si es vip o 2 sino es vip: \n");
scanf(" %d", &vip);

//Ejecutamos los procesos que corresponden
multiplicador = (tip_pago == 'E') ? punt_E : ((tip_pago == 'T')? 2:3);
Agreg_vip = ( vip == 1)? bono_vip : 1;
punt_base = mont_total * multiplicador;
punt_total=punt_base* Agreg_vip;
pagar= mont_total * descuento;

//mostramos los puntos obtenidos y el total a pagar con descuento
printf("Los puntos obtenidos son: %f\n",punt_total );
printf("El total a pagar es: %f\n ",pagar );
}