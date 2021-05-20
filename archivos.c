#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct{
        char* linea [100];
        int cantidadLineas;

    }lineas;
/*
int main(void)
{
    char* ruta = "tareas.txt";
    lineas  lineasLeidas;
    //lineasLeidas = leer_tareas_archivo(ruta);
    
    char * buffer[1000];
    lineas leerLineas[10];
    int i = 0;
	//Abro el archivo
    FILE *f = fopen(ruta,"r");
	if (f ==NULL)
	printf("Error");//ERROR
	else
    printf("abri el archivo \n");
        
    rewind(f); //ubico puntero en inicio de archivo
    //Leo hasta que llegue a 1000 caracteres o al final de linea
    while (fgets(buffer,1000,f) != NULL){
        strcpy(leerLineas[i].linea, buffer); //guardo el buffer en el array 
        i++;
    }
	fclose(f);
    
    for(int j=0;j<i;j++){
    printf("contenido:%s \n",leerLineas[j].linea);
    }
}
   leer_tareas_(ruta_archivo){

   }
*/