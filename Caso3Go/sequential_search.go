package main

import (
	"math/rand"
	"time"
)

//Algoritmo principal
//Se encarga de realizar una busqueda secuencial en un arreglo semi randomizado, no ordenado
func sequentialSearch(num1 int) {
	start := time.Now()

	rand.Seed(time.Now().Unix())
	var rngArray []int = rand.Perm(10000000) // Se encarga de crear y cargar el array con numeros, de una manera semi randomizada partiendo de una permutacion
	var state bool = false

	for i := range rngArray {
		if rngArray[i] == num1 {
			state = true
		}
	}

	if state {
		println("El numero se encuentra dentro de la lista")
	} else {
		println("El numero no se encuentra dentro de la lista")
	}

	duration := time.Since(start)

	println("El tiempo de ejecucion es de: ", duration.Nanoseconds())
}

func main() {
	var num1 int = -1

	sequentialSearch(num1)
}
