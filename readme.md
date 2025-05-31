# Homework 3 #

## Como ejecutar los ejercicios: ##
    - los ejercicios se ejecutan con el comando make ejN (siendo N el numero de ejercicio)

## Comentario del HW3: ##
    - Lo único a aclarar es que en el ejercicio 3 no creé un archivo contenedor.cpp para desarrollar los métodos. Toda la implementación se encuentra en el archivo .hpp porque la clase utiliza templates y los templates se instancian en tiempo de compilación, por lo que requieren que tanto la declaración como la implementación estén disponibles en el momento en que se utilizan (generalmente en los headers).