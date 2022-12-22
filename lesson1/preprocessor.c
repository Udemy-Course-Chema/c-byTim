// PREPROCESSOR
/**
 * Casi llamado también "directivas"
 * Es la única característica que los otros lenguajes de 
 * programación no poseen. 
 * Se empieza con "#" (gato)
 * Hay más como #if #where etc
 * Interesante.
 * 
 * <studio.h> La extensión ".h" es un tipo archivo llamado "headers".
 * stdio stand for "standard input/output"
 * 
 * 
 * Two ways of include
 * #include <stdio.h> -> buscar uno o más archivos en el sistema del 
 * directorio.
 * #include "stdio.h" -> busca la primera concurrencia del este directorio.
 * 
 * 
 * you should use #ifndef and #define to protect against multiple inclusions
 * of a header file
*/


#include <stdio.h>

int main(){
    printf("Estamos usando el include.\n");
    return 0;
}