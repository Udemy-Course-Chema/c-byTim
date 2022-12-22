/**
 * 
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    // Enum
    enum primaryColor { red = 10 , blue, yellow};// Cómo una lista, se indexa como 0,1,2.
    enum gender { male, female };
    enum gender myGender;
    myGender = male;

    bool isMale = (myGender == male );


    enum month {Enero, Febrero, Marzo};
    enum month elPutoMes;
    elPutoMes = Febrero;
    printf("Los enums: %d\n", red);
    printf("Mi genero: %d\n", myGender );
    printf("El resultado del booleano: %d\n", isMale);

    printf("\n\n");
    printf("===================\n");
    char miCaracter = 'A';
    printf("Mi caracter seleccionado: %c\n", miCaracter);

    // Char

    return 0;
}