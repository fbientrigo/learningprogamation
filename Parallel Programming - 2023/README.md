# Programación Paralela

El curso esta impartido en C, sin embargo el libro utiliza comúnmente C++; el cual es un lenguaje más moderno y utilizado en la industria,
debido a que es retrocompatible en su mayoria los archivos estan escritos en C++.

### Compilación
Por tanto es posible compilarlos utilizando `gcc` haciendo links a la librería estándar de C++; sin embargo, `gcc` al encontrar la extensión de cpp automáticamente entenderá que se trata de un archivo de este tipo 
```bash
gcc archivo.cpp -lstdc++
```

tambien es posible especificar el lenguaje de compilación
```bash
gcc -x c++ archivo.cpp 
```

Aunque en todo caso es recomendado, por comodidad utilizar el compilador en su versión de C++, que deberia de estar instalado:
```
g++ archivo.cpp
```

A este punto solo se trabaja con scripts únicos y headers, por tanto, aún no hay nada que necesite la implementación de varios links o CMake.

### Libro
El Libro utilizado es:
```
Parallel Programming - Concepts and Practice | B. Schmidt., J. González-Domínguez., C. Hundt. & M. Schlarb.
```
