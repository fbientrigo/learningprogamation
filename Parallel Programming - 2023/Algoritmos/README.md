# Algoritmos
Se incluyen distintos algoritmos para mejorar la velocidad del codigo, su implementación en C.

Se enseña a crear una build mediante linking basico (osea meramente usando `gcc`) o su alternativa "moderna" que es `cmake`

Se utiliza:
- cmake
- ninja

para instalarlos en linux es:

### build essentials
es un meta paquete para todo lo necesario
```
sudo apt-get update
sudo apt-get install build-essential
```

### install Ninja y cmake
```
sudo apt-get install ninja-build
sudo apt-get install cmake
```

### check
comprueba que estan con:
```
ninja --version
cmake --version
```

___

# Uso
cada carpeta contiene algoritmos y un `README.md` que describe como crear los archivos, como compilar y usar las distintas herramientas, excelentes si no se tiene conocimiento.

Cmake es una herramienta para ahorrarnos los problemas de compilación con varias librerias, en conjunto a Ninja es utilizado para compilar Google Chrome.
