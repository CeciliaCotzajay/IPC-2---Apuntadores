#include <stdio.h>

// apuntadores a apuntadores


int main() {
    
    char c = 'z';
    char *pc= &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    ***pppc = 'm'; //cmabi el valor de c a 'm'
    
    printf("el valor ddel utlimo apuntador es : %c", ***pppc);
    
    return 0;
}