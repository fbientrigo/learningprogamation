Compilación de libreria con `gcc`,

teniendose escrito el archivo `heapsort.c` y su header `heapsort.h`

Se crea entonces un archivo llamado `CMakeLists.txt`:

```cmake
cmake_minimum_required(VERSION 3.0)
project(heapsort)

# Add the heapsort library
add_library(heapsort STATIC heapsort.c)
target_include_directories(heapsort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add an example executable that uses the heapsort library
add_executable(example main.c)
target_link_libraries(example heapsort)
```

- declara un proyecto llamado `heapsort`
- agrega una libreria estatica llamada `heapsort` construida con `heapsort.c`
- `target_include_directories()` sirve para agregar el directorio que contiene el header file `heapsort.h`, de manera que otros programas puedan incluirlo
- finalmente `target_link_libraries(example heapsort)` une el ejecutable `example` con la libreria estatica `heapsort`

Ahora debes de crear un folder llamdo: `build` siguiendo estos pasos para entrar y correr `cmake` adentro pero con argumento de la carpeta padre:

```bash
mkdir build
cd build
cmake ..
make
```

en el build deberas ver algo como:
```bash
$> build> cmake ..
-- Building for: Ninja
-- The C compiler identification is GNU 12.2.0
-- The CXX compiler identification is GNU 12.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
...
```

como veras utilizo ninja, que es bastante rapido y low-level:
https://ninja-build.org/

en mi caso he de utilizar:
```bash
mkdir build
cd build
cmake -G Ninja ..
ninja
```


