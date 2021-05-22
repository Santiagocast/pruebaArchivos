#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 char * leerTarea(int ruta,int linea);


int main(void)
{
    char* ruta = "tareas.txt";
    int linea = 0 ;
    for(linea;linea<5;linea++)
    printf("tarea: %s\n", leerTarea(ruta, linea));
}

 char * leerTarea(int ruta, int linea_buscada){
    char * buffer[50];  //ver como hacer para ver cuanto ocupa el buffer 
    int contador = 0;   
	//Abro el archivo
    FILE *f = fopen(ruta,"r");
	if (f ==NULL)
	printf("Error");//ERROR
	else
    printf("abri el archivo \n");

    while(contador<linea_buscada){ //me salteo las lineas y voy a la linea buscada
        fgets(buffer,50,f);
        contador++;
    } 
    char* tarea = malloc(50);  //ver como hacer para ver cuanto ocupa el buffer 
    fgets(buffer,50,f);//Leo hasta que llegue a 50 caracteres o al final de linea
    strcpy(tarea, buffer); //guardo la tarea que me importa    
	fclose(f);
    return tarea;
 }