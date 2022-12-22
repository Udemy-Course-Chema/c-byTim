/**
 * PRINTF
 * 
 * There are three types of Stream
 * Error Stream, stardand input and stardand outpub.
 * 
 * STDIN es el que escribe el valor del teclado. 
*/

#include <stdio.h>

int main(){
    char miNombre[100];
    int i;
    printf("¿Cuál es tu nombre? \n");
    scanf("%s", miNombre);
    printf("¿Y cuál es tu ID?\n");
    scanf("%d", &i);

    printf("\n\nTu nombre es: %s y tu valor es: %d\n\n", miNombre, i );
    
    double x;
    printf("\nEl doble: ");
    scanf("%lf", &x);
    printf("\n\nEl resultado del doble: %lf\n\n", x);


    return 0;
}