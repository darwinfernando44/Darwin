#include <stdio.h>

void main(){
//Declaramos las variables 
    float Banderazo = 1.50;
    float Costo_KM = 0.80;
    float  Costo_min = 0.30;
    float  Recar_noct = 1.25;
    int Hora_diurn = 6;
    int Hora_noct = 22;
    float descuento = 0.95;
    float recargo = 0.0;
    float total_km = 0.0;
    float total_min = 0.0;
    float cos_tot  = 0.0;
    float cos_des = 0.0 ;
    float distancia = 0.0 ;
    float tiempo = 0.0 ;
    int hora_serv = 0 ;
    char dia_sem[20] = "";

//pedimos los dato necesarios para resolver el algoritmo
    printf("Ingresa la distancia en km: \n");
    scanf("%f", &distancia);

    printf("Ingrese el tiempo en minutos: \n");
    scanf("%f", &tiempo);

    printf("Ingrese la hora que pide el servicio entre (0-23): \n");
    scanf("%d", &hora_serv);

    printf("Ingrese el dia que pide el servicio: \n");
    scanf("%s", dia_sem);
//comparamos para saber si es horario nocturno o diurno
    if(hora_serv < Hora_diurn || hora_serv >= Hora_noct){
        recargo = Recar_noct;
    }else{
        recargo = 1;
    }
//Relizamos los procesos algebraicos para calculas los totales
    total_km= distancia * Costo_KM;
    total_min= tiempo * Costo_min;
    cos_tot=(total_km + total_min + Banderazo) * recargo;
    cos_des= cos_tot * descuento;
//Imprimimos si el servicio fue facturado en la hivhe o en el dia
    if(recargo == Recar_noct){
        printf("El servicio se facturo con horario nocturno \n");
    }else{
        printf("El servicio se facturo con horario diurno \n");
    }
//Escribimos todos los datos de salida 
printf("El servicio se realizo el dia: %s\n",dia_sem);
printf("El costo de los km es: %.2f\n",total_km);
printf("El costo  por min es: %.2f\n",total_min);
printf("El costo total del servicio es: %.2f\n",cos_tot);
printf("El total con descuento del 5 porciento es: %.2f\n",cos_des);
}
    
