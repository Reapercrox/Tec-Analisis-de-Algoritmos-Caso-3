#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define CANTIDAD 50000000
const int numBuscado = -1;
int numArray[CANTIDAD];

void busqueda(int pBuscado);

int main(){
	int* pointerDir1 = &numBuscado;
	const int* pointerDir2 = &numArray[CANTIDAD-1];
    int i;
	double seconds;

	srand(time(0));

    for(i = 0; i<CANTIDAD;i++){
    	numArray[i] = rand();						// Se inserta solo el mismo numero positivo
	}

	clock_t tInicio = clock();					// Marca inicio del tiempo
	busqueda(numBuscado);						// Busqueda de un numero negativo para hacer que no lo encuentre
	clock_t tFinal = clock();					// Marca final del tiempo

	seconds = (double)(tFinal - tInicio)*1000000000 / CLOCKS_PER_SEC;
	int memory = pointerDir2 - pointerDir1;

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
