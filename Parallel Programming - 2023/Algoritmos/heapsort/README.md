Compilación de libreria con `gcc`,

teniendose escrito el archivo `heapsort.c` y su header `heapsort.h`

```bash
gcc -c heapsort.c -o heapsort.o
ar rcs libheapsort.a heapsort.o
```

- `ar` para crear modificar y extraer ficheros de librerias
- `r` para indicar que se cree la libreria
- `c` crea la libreria si no existe
- `s` agrega un index a la libreria para mejorar la velocidad

Y es necesario tener un header file para que se tenga un prototipo de la función, alli va `heapsort.h`; que se puede incluir con `#include "heapsort.h"`

a la hora de compilar es necesario crear el link:

```bash
gcc main.c -o main -L. -lheapsort -I.
```

de esa manera al correr el programa obtendras:

```bash
$> heapsort> ./main.exe
Original array:
12 11 13 5 6 7
Sorted array:
5 6 7 11 12 13
```