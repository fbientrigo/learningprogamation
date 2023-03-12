# para construir codigo

1a. compilar a codigo objeto
```
$ c++ -c foo.cpp -o foo.o 
```
1b. compilar objeto a ejecutable
```
$ c++ foo.o -o foo
```

2. compilar a ejecutable directamente
```
$ c++ foo.cpp -o foo
```

3. compilar con make
```
$ make foo
```

es posible observar los links que han ocurrido, mediante
```
$ ldd foo
```

a mi me ha generado:
        ntdll.dll => /cygdrive/c/Windows/SYSTEM32/ntdll./ntdll.dll (0x7ffe5b6b0000)
        KERNEL32.DLL => /cygdrive/c/Windows/System32/KERm32/KERNEL32.DLL (0x7ffe5a4d0000)
        KERNELBASE.dll => /cygdrive/c/Windows/System32/Ktem32/KERNELBASE.dll (0x7ffe59410000)
        msvcrt.dll => /cygdrive/c/Windows/System32/msvcr2/msvcrt.dll (0x7ffe5a2f0000)


#### linking
Normalmente puede utilziarle un link mediante `-l` y se pueden especificar paths de busqueda para headers mediante `-L`
Se debe notar que muchas cosas pueden ocurrir, existe una gran gamma de problemas en el proceso de linking, inclusive la arquitectura del sistema.

es linux es posible investigar estos problemas mediante:
- ldd: imprime la locacion de las librerias
- file: clasifica files, entregando informacion de las librerias
- nm : lista symbols en el archivo objeto, archvios, shared libs y ejecutables, output super larga.
- c++filt : decodifica e imprime informacion de manera que sea legible para humanos.

#### objetos y leer informacion
no debemos de utilziar printf o scanf en c++, pues se consideran obsoletos y deben de omitirse pues no pueden manejar estructuras de datos definiadas por el usuario. en su lugar:

```
#include <iostream>

std::cout << "Hello, wolrd" << std::endl;
//opcional y sirve en unix
std::cerr ;
```

Tambien es posible tragar información
```
#include <iostream>

int i, float f;
std::cin >> i >> f;
```

normalmente hacemos test, pues esto puede salir mal varias veces por que no se pueda convertir al tipo de dato correcto:
```
#include <iostream>

int i;
if (std::cin >> i) {
//succes
} else {
//failure
}
```

#### Informacion de la libreria estanadar
www.cplusplus.com

