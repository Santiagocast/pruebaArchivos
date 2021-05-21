#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct{
        char* linea [100];
        int idTarea;

    }tareas;

tareas* leer_tareas(int ruta_archivo);


int main(void)
{
    char* ruta = "tareas.txt";
    //tareas* tareas  = leer_tareas_archivo(ruta);
    
    char * buffer[1000];
    
    int i = 0;
	//Abro el archivo
    FILE *f = fopen(ruta,"r");
	if (f ==NULL)
	printf("Error");//ERROR
	else
    printf("abri el archivo \n");

    //Cuento las tareas para ver el tamaño del array
    while (fgets(buffer,1000,f) != NULL){
     i++;
    } 
    printf("hay %d tareas \n",i);
    //Creo un array con las tareas
    tareas tarea[i];
    rewind(f); //ubico puntero en inicio de archivo
    i=0;
    //Leo hasta que llegue a 1000 caracteres o al final de linea
    while (fgets(buffer,1000,f) != NULL){
        strcpy(tarea[i].linea, buffer); //guardo el buffer en el array
        tarea[i].idTarea= i; 
        i++;
    }
	fclose(f);
   
    //Imprimo las tareas
    for(int j=0;j<i;j++){
    printf("Tarea %d:%s \n",tarea[j].idTarea,tarea[j].linea);
    }
}

/*
  tareas * leer_tareas(ruta_archivo){ 

    char * buffer[1000];
    
    int i = 0;
	//Abro el archivo
    FILE *f = fopen(ruta,"r");
	if (f ==NULL)
	printf("Error");//ERROR
	else
    printf("abri el archivo \n");

    //Cuento las tareas para ver el tamaño del array
    while (fgets(buffer,1000,f) != NULL){
     i++;
    } 
    printf("hay %d tareas \n",i);
    //Creo un array con las tareas
    tareas tarea[i];
    rewind(f); //ubico puntero en inicio de archivo
    i=0;
    //Leo hasta que llegue a 1000 caracteres o al final de linea
    while (fgets(buffer,1000,f) != NULL){
        strcpy(tarea[i].linea, buffer); //guardo el buffer en el array
        tarea[i].idTarea= i; 
        i++;
    }
	fclose(f);
   
    return tarea*;
  }
*/