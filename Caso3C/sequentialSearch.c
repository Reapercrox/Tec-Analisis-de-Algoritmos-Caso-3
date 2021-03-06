#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define CANTIDAD 10000000

int busqueda(long pNumArray[]);

int main(){
    static long numArray[CANTIDAD];
    long i;
	srand(time(0));
    for(i = 0; i<CANTIDAD;i++){
    	numArray[i] = rand();
	}
	
	busqueda(numArray);
}


int busqueda(long pNumArray[]){
	double seconds;
	
	clock_t tInicio = clock();				// Marca inicio del tiempo

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

	clock_t tFinal = clock();					// Marca final del tiempo
	seconds = (double)(tFinal - tInicio) / CLOCKS_PER_SEC;
	printf("El programa se ejecuto en: %f nanosegundos\n",seconds);
	
	return 0;
}
