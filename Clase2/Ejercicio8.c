#include <stdio.h>

// Direcciones inválidas de apuntador 2da Forma

int *ptr_int, var;

void init_ptr(){
    int local = 57;
    ptr_int = &local;
    var = *ptr_int;
    *ptr_int = 23;
}

int main() {
    
    init_ptr();
    var = *ptr_int;
    *ptr_int = 20;
    
    return 0;
}