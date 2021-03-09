#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define CANTIDAD 200
static int numArray[CANTIDAD];
const int numBuscado = -1;

void busqueda(int pBuscado);

int main(){
	int* pointerDir1 = &numArray;
	int* pointerDir2 = &numBuscado;
    int i;
	double seconds;
    for(i = 0; i<CANTIDAD;i++){
    	numArray[i] = 123;						// Se inserta solo el mismo numero positivo
	}

	clock_t tInicio = clock();					// Marca inicio del tiempo
	busqueda(numBuscado);						// Busqueda de un numero negativo para hacer que no lo encuentre
	clock_t tFinal = clock();					// Marca final del tiempo

	seconds = (double)(tFinal - tInicio)*1000000000 / CLOCKS_PER_SEC;
	int memory = pointerDir1 - pointerDir2;

	printf("Ejemplo de busqueda secuencial con %d elementos\n",CANTIDAD);
	printf("El programa se ejecuto en: %f nanosegundos\n",seconds);
	printf("La primera direccion de memoria es: %d\n",memory);
}

//Funcion de busqueda secuencial
//Se encarga de realizar una busqueda secuencial en un arreglo randomizado
void busqueda(int pBuscado){
	int i;
	bool estado = false;

	for(i=0; i<CANTIDAD;i++){
		if(numArray[i] == -1){					//Se busca el numero de manera que se de el peor caso siempre
			estado = true;
		}
	}
	
	if (estado) {
		printf("\nSi se encontro\n");
	}
	else{
		printf("\nNo se encontro\n");
	}
}
