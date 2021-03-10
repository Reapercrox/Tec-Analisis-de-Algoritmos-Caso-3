# Caso 3 - Analisis de Algoritmos 

### Integrantes
- Rolbin Méndez Brenes
- Guillermo Coto Alvarez

### Descripción de la computadora utilizada
- CPU: Intel Core i5-8520U
- RAM: 12 GB
- SO: Windows 10

### Programas Utilizados
Antes de comenzar se debe tener instalado los siguientes programas:
- [Download](https://bellard.org/tcc/) TCC (Tiny C Compiler)
- [Download](https://gcc.gnu.org/) GCC Compiler
- [Download](https://www.rust-lang.org/) Rust Programming Language
- [Download](https://golang.org/) The Go Programming Language

## Compilación
#### C　
Para compilar en C debe abrir el CMD en la carpeta del compilador TCC y escribir el siguiente comando:
```C
tcc -o <direccion donde estara el ejecutable\nombre.exe> <direccion donde esta el archivo\nombre.c>
```
Por ejemplo:
```C
tcc -o C:\Users\rolbi\Desktop\Caso3C\sequentialSearch.exe C:\Users\rolbi\Desktop\Caso3C\sequentialSearch.c
```

Posteriormente se debe ejecutar el archivo search.exe desde el CMD

#### C++
Para compilar en C++ debe abrir el CMD en la carpeta del archivo origen y compilar desde Visual Studio Code
```

Posteriormente se debe ejecutar el archivo search.exe desde el CMD

#### Rust
Para compilar en Rust se debe abrir el CMD en el directorio del archivo origen y escribir:
```Rust
cargo build						 Para compilar
cargo run							Para ejecutar
```

#### Go
Para compilar en Go debe abrir el CMD en la carpeta del archivo origen y escribir:
```Go
<go run sequential_search.go>
```
Por ejemplo:
```C
gcc ....
```
## Algoritmo seleccionado
Para el caso 3 utilizamos el algoritmo de busqueda secuencial en un array de n elementos, programamos el peor de los casos donde se recorre el array por completo y no se encuentra el elemento buscado.

## Rendimiento de Tiempo y Memoria en C y C++
Para demostrar la diferencia en memoria y tiempo utilizaremos la siguiente tabla

| Cantidad de Elementos  | Lenguaje | Memoria(bytes)) | Tiempo(nanosegundos) |
| :------------ |:---------------:| -----:| ---------:|
|    1 000 000     | C             |  1 000 143  |  1 600 000  |
|                 | C++        |  1 002 053  |  2 000 000  |
|    10 000 000   | C             |  10 000 143  |  17 000 000  |
|                 | C++        |  100 002 053  |  31 000 000  |
|  30 000 000     | C             |  30 000 143  |  71 000 000  |
|                 | C++        |  30 002 053  | 63 000 000   |
|  50 000 000   | C             |  50 000 143  |  110 000 000  |
|                 | C++        |  50 002 053  |  109 000 000  |

Por lo tanto se puede demostrar que en tiempo de ejecucion ambos idiomas tienen tiempos similares, sin embargo en el manejo de memoria C maneja menos memoria que C++

## Rendimiento de Tiempo En C, C++, Go y Rust
Para demostrar la diferencia en tiempo utilizaremos la siguiente tabla

| Cantidad de Elementos  | Lenguaje |  Tiempo(nanosegundos) |
| :------------ |:---------------:| -----:| ---------:|
|    1 000 000     | C             |   1 600 000  |
|                 | C++        |    2 000 000  |
|                 | Rust       |    795 968 800  |
|                 | Go        |   36 827 700  |
|    10 000 000   | C             |   17 000 000  |
|                 | C++        |   31 000 000  |
|                 | Rust        |   11 928 738 000  |
|                 | Go        |    679 232 400  |
|  30 000 000     | C             |    71 000 000  |
|                 | C++        |   63 000 000   |
|                 | C++        |  24 797 701 500  |
|                 | Go       |   2 353 068 700  |
|  50 000 000   | C             |   110 000 000  |
|                 | C++        |   109 000 000  |
|                 | Rust        |   24 936 373 400  |
|                 | Go       |   3 971 168 100  |

Por lo tanto se puede concluir que tanto Rust como Go tienen mas duracion en tiempo que C y C++