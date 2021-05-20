#include<stdio.h>
#include<stdlib.h>
#include<string.h>
tareas* leer_tareas_(int ruta_archivo);


 typedef struct{
        char* linea [100];
        int idTarea;

    }tareas;

int main(void)
{
    char* ruta = "tareas.txt";
    tareas  tareasLeidas;
    //lineasLeidas = leer_tareas_archivo(ruta);
    
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
    tareas leerTarea[i];
    rewind(f); //ubico puntero en inicio de archivo
    i=0;
    //Leo hasta que llegue a 1000 caracteres o al final de linea
    while (fgets(buffer,1000,f) != NULL){
        strcpy(leerTarea[i].linea, buffer); //guardo el buffer en el array
        leerTarea[i].idTarea= i; 
        i++;
    }
	fclose(f);
    for(int j=0;j<i;j++){
    printf("Tarea %d:%s \n",leerTarea[j].idTarea,leerTarea[j].linea);
    }
}
 // tareas * leer_tareas_(ruta_archivo){ }
