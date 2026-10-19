#include <stdio.h>

// 1.Declara las variables

int main (){
    int num_doc =  0;
    int num_img = 0;
    int num_vid = 0;
    int num_prog = 0; 
    
    float tam_doc = 0.0;
    float tam_img = 0.0;
    float tam_vid = 0.0;
    float tam_prog = 0.0;
    
    float cap_disc = 0.0;  
    
    float espac_doc = 0.0; 
    float espac_img = 0.0; 
    float espac_video = 0.0; 
    float espac_prog = 0.0; 
    float espac_usado = 0.0; 
    float espac_usadoGB = 0.0;
    float porc_usado = 0.0;

     printf("Porfavor ingresa la cantidad de documentos: ");
    scanf("%d", &num_doc);
    
    printf("Porfavor ingresa el tamano de documentos: ");
    scanf("%f", &tam_doc);
    
    printf("Porfavor ingresa la cantidad de imagenes: ");
    scanf("%d", &num_img);
    
    printf("porfavor ingresa el tamano de imagenes: ");
    scanf("%f", &tam_img);
    
    printf("Porfavor ingresa la cantidad de videos ");
    scanf("%d", &num_vid);
     
    printf("Porfavor ingresa el tamano de videos: ");
    scanf("%f", &tam_vid);
     
    printf("Porfavor ingresa la cantidad de programas: ");
    scanf("%d", &num_prog);

    printf("Porfavor ingresa el tamano de programas: ");
    scanf("%f", &tam_prog);

    printf("Porfavor ingresa la capacidad del disco en GB: ");
    scanf("%f", &cap_disc);
        
    espac_doc= num_doc * tam_doc ;
    espac_img = num_img * tam_img;
    espac_video = num_vid * tam_vid;
    espac_prog = num_prog * tam_prog;

    espac_usado = espac_img + espac_doc + espac_video + espac_prog;
    espac_usadoGB = espac_usado / 1024;
     
    porc_usado = (espac_usadoGB * 100) / cap_disc;


    printf("El espacio usado de los documentos es %.2f \n", espac_doc);
    printf("EL espacio usado de las imagenes es %.2f \n ", espac_img);
    printf("El espacio usado de los videos es %.2f \n", espac_video);
    printf("El espacio usado de los programas es %.2f \n", espac_prog);

    printf("La capacidad del disco es %.2f \n", cap_disc);
    printf("El espacio total usado es %.2f \n", espac_usado);
    printf("El espacio usado en GB es %.2f \n", espac_usadoGB);

    printf("el porcentaje usado es %.2f \n", porc_usado);



    return 0;
}
    

