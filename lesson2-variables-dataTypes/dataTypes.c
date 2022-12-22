/**
 * DATA TYPES:
 * 
 * int
 * float
 * double
 * chat
 * _Bool
 * 
 * The difference is the memory can hold the amount of storage. 
 * 
*/

/**
 * C offer three adjetive keywords to modify the basic integer type:
 * short, long and unsigned.
 * 
 * Example:
 * long int numberOfPoints = 131071100L;
 * 
 * El tipo "unsigned" permite que usen sólo valores positivos, no Negativos. 
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    int integerVar = 100;
    float floatingVar = 331.7023;
    double doubleVar = 8.44e+11;

    bool boolVar = 1;
    bool esMeasurable = true;
    bool esValido = false;

    printf("El valor del número entero: %d\n", integerVar);
    printf("El valor del flotante: %.2f\n", floatingVar);
    printf("El valor del double : %.2f\n", doubleVar);
    printf("El valor del booleano: %d\n", boolVar);

}