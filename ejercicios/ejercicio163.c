#include<stdio.h>
//declaramos las variables
int main(){
    int dia_31 = 31;
    int dia_30 = 30 ;
    int dia_28 = 28;
    int dia_29 = 29;
    int dia = 0;
    int mes = 0;
    int Anio = 0;
    char* tip_anio = " ";
    int Dias_max = 0;
    char* bis= "Bisiesto";
    char* norm="Normal";
//Damos la bienvenida al usuario
    printf("Bienvenido a el validador de fechas de la ferreteria. \n");
//Pedimos los datos de la fecha
    printf("Porfavor ingrese el dia de su fecha: \n");
    scanf(" %d", &dia);
   
    printf("Porfavor ingrese el mes de su fecha: \n");
    scanf(" %d", &mes);

    printf("Porfavor ingrese el anio que correspomde: \n");
    scanf(" %d", &Anio);
// hacemos la operacion logica para saber si es año bisiesto
    if(Anio%4 == 0 && Anio%100 != 0 || Anio%400 == 0){
        tip_anio =bis;
    }else{
        tip_anio = norm;
    }
// hacemos las condiciones para poder saber los dias maximos del mes ingresado
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){
        Dias_max = dia_31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        Dias_max = dia_30;
    }else if( mes == 2){
        if(tip_anio == bis){
            Dias_max = dia_29;
        }else{ 
            Dias_max = dia_28;
        }
    
    }
//verificamos si tanto el dia como el mes se encuentran en el rango para ser validas 
    if (dia >= 1 && dia <= Dias_max && mes >= 1 && mes <= 12){
        printf("La fecha ingresada es valida. \n");
    }else{
    printf("La fecha ingresada no es valida. \n");

    }
    return 0;
}
    
   
 

