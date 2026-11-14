#include<stdio.h>
#include<math.h>

int main(){
   float Factor= 0.27778;
    float M_s=0.0;
    float Val_abs= 0.0;
    float velocidad= 0.0;
    printf("Ingresa la velocidad en Km/h. \n");
    scanf("%f", &velocidad);

    M_s= velocidad * Factor;
    if(M_s > 0){
        Val_abs= fabs(velocidad - M_s);
printf("El algoritmo concluyo correctamente. \n");
printf("El equivalente de %f k/h es %f m/s. \n",velocidad ,M_s);
printf ("El valor absoluto de la diferencia es %f\n", Val_abs);

    }else{
        printf("El valor ingresado no es valido. \n");
    }
    return 0;

}