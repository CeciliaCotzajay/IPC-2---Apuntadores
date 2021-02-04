#include <stdio.h>

// Aritmetica de Apuntadores, desplaza la dirección de 
// memoria hacia adelante o atrás por medio de sumas o restas

int main() {
    int lista[5] = {10,20,30,40,50};
    int *p;
    
    p = &lista[3];
    p = lista +3;
    
    printf("%d\n", lista[2]);
    printf("%d\n", *(lista+2));
    return 0;
}