#Clase 2

## Arreglos multidimensionales
Poblar o iterar sobre un arreglo bidimensional, solemos pensarlos de manera uni dimensional
```
for (int i=0; i<xN; i++){
    for (int j=0; j<yN; j++){
        array[i * Ny + j]
    }
}
```
Pues asi nos aproximamos mas al modelo que tiene la computadora fisica de los datos.

## Paralelizacion y la idea del curso
La idea del curso es paralelizar programas, metodos de machine learning, paralelizaciones, programas que requieran de muchos calculos.

Tendremos ciclos extremadamente largos, la paralelizacion es comunmente dividir el trabajo de los ciclos en distinos hilos llamados `threads`

### Optimizacion
Es buena idea partir por la optimizacion antes de paralelizar;
aprender los algoritmos a utilizar y su eficiencia es algo netamente matematico, muchas veces facil de aplicar es algo poderoso.

Es posible incluso optimizar en el momento de compilar
```
gcc .\c2_9_tiempo.c -o tiempo.exe -O0
```
sin el uso de optimizaciones : `El tiempo: 0.312000`

el compilador analiza el estado del programa en cada linea de ejecucion, la optimizacion cambia el programa pero el resultado es identico:
```
gcc .\c2_9_tiempo.c -o tiempo.exe -O3
```
Con el uso de optimizaciones : `El tiempo: 0.091000`

#### object code
Permite pasar nuestro codio a lenguaje de maquina, reduciendo la abstracciones innecesarias y dejando lo importante

Generamos un object file:
```
gcc .\c2_9_tiempo.c -c -O3
```
estamos generando un objet file `c2_0_tiempo.o` utilizando la flag `-c`

```
objdump -d .\c2_9_tiempo.o
```
es increible todo lo que se obtiene;

en resumen, cuando escribimos un programa queremos buscar posibilidades de optimizacion, optimizacion via algoritmos o via compilador.


## Instalar Librerias
El profe se encargara de que tengamos cuentas para KOSMOS, y ahi se procedera a continuar esa parte.