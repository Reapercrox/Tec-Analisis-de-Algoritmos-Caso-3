#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define CANTIDAD 10000000

void busqueda(long pNumArray[]);

int main(){
    static long numArray[CANTIDAD];
    long i;
	double seconds;
	srand(time(0));
    for(i = 0; i<CANTIDAD;i++){
    	numArray[i] = rand();
	}

	clock_t tInicio = clock();					// Marca inicio del tiempo
	
	busqueda(numArray);

	clock_t tFinal = clock();					// Marca final del tiempo
	seconds = (double)(tFinal - tInicio)*1000000000 / CLOCKS_PER_SEC;
	printf("El programa se ejecuto en: %f nanosegundos\n",seconds);
}


void busqueda(long pNumArray[]){
	int i;
	bool estado = false;

	for(i=0; i<CANTIDAD;i++){
		if(pNumArray[i] == -1){
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
