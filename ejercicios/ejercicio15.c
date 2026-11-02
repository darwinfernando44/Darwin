#include<stdio.h>

void main(){
    int cons = 100;
    float mon_des, prec_fin,triple, precio, descuento = 0.0;

printf("ingrese el precio: \n");
scanf("%f", &precio);

printf("ingrese el descuento: \n");
scanf("%f", &descuento);

if(descuento >= 0 && descuento <= 100  ){
       mon_des=precio * descuento / cons;
    prec_fin = precio - mon_des;

       if( prec_fin > 0){

     triple=prec_fin * 3;
       }else{
        triple = prec_fin * 1; }
        printf("El descuento que se hara es : %f\n",mon_des);
        printf("El total a pagar es: %f\n",prec_fin);
        printf("El triple de lo que se deberia pagar: %f\n", triple);
   

}else{
    printf("El descuento ingresado es invalido. \n");
}
}