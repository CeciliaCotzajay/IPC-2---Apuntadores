#include <stdio.h>

// Desreferenciación de apuntadores forma2: mediante estructuras

int main() {
    
    struct Articulo{
        char nombre[20];
        char descripcion[100];
        float precio;
    };
    
    struct Articulo art;
    struct Articulo *ptr_art = &art;
    
    (*ptr_art).precio = 50.38;
    //
    ptr_art->precio = 50.38;
    
    printf("Precio: %f", ptr_art->precio);
    return 0;
}