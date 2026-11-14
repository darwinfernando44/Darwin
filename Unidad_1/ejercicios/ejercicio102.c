#include<stdio.h>
void main(){
   float Coci,Resi,dif,prom=0.0;
   int z,s= 0;
   printf("Ingres su primer numero: \n");
   scanf("%d", &z);
   printf("Ingrese su segundo numero: \n");
   scanf("%d", &s);
    if (s != 0 ){
     Coci= (float) z  / s;
     Resi= z % s;
     prom  =(float) (z + s)/2;
     dif= (Coci + Resi) - prom;
    printf("la lista de variables usada fue: cociente,residuo,promedio,diferencia. \n");
    printf(" El cociente es: %.2f\n", Coci);
    printf("El residuo es: %.2f\n", Resi);
    printf("El promedio es: %.2f\n",prom);
    printf("La diferencia entre el resultado y el promedios es: %.2f\n",dif);

    }else{
        printf("Error  << s no puede ser 0>>.");
    }

}