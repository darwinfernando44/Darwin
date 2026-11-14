#include<stdio.h>

void main(){

    int num_gan = 676767;
    char pleno = 'P';
    char Docena = 'D';
    char columna = 'C';
    int pag_pleno = 70;
    int pag_doc = 8 ;
    int pag_col = 5;
    float descuento = 0.95 ;
    char Tipo_apuesta =' ';
    int Factor_pago = 0;
    int Num_apostado =0;
    float Mon_apostado = 0;
    float premio = 0.0;
    float prem_des= 0.0;

       
    printf("Ingrese el tipo de apuesta \n1 Pleno(P). \n2 Docena(D). \n3 Columna(C). ");
    scanf(" %c", &Tipo_apuesta);

    printf("Ingrese el numero de apuesta: \n");
    scanf(" %d", &Num_apostado);

    printf("Ingrese el monto apostado: \n");
    scanf(" %f", &Mon_apostado);

    Factor_pago = (Tipo_apuesta == pleno)? pag_pleno :((Tipo_apuesta == Docena)? pag_doc : pag_col);
   
    if(Num_apostado == num_gan){
    premio= Factor_pago * Mon_apostado;
    prem_des= premio * descuento;
   
    printf("El premio obtenido es: %.2f\n", premio);
    printf("Despues de aplcar  el descuento de 5 porciento: %.2f\n",prem_des );
}else{
    printf("Usted no es el ganador de la loteria");}
    

}
