/* Este programa ayuda a saber los dias que tiene cada mes del año asi como si es año bisiesto o no
 *
 * Autor:Karla Alexandra Hernandez Aviles
 * Fecha:30 Agosto 2018
 * Correo: A01411843
*/


#include <stdio.h>

int main() {
    // Declaracion de variables
    signed int year;
    int month;

    //El usuario debe introducir el año y el mes que desea
    printf("Welcome, I will help you know how many days the month has. Could you tell me what year is it?");
    scanf ("%i", &year);
    printf("Could you tell me what month is it? (1-12)");
    scanf("%i", &month);

    switch(month) {
        //Meses como enero, marzo, mayo, julio, agosto, octubre y diciembre constan de 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days\n");
            break;
        // Meses como Abril, Junio, Septiembre y Noviembre solo tiene 30 dias

        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days\n");
            break;

            // Febrero es el unico mes en el que sus dias dependen si es año bisiesto o no,
            // en esta parte se hace el proceso para saber si febrero tiene 29 o 28 dias
        case 2:
            if (year %4 == 0) {
                printf ("this month has 29 days, because is a leap year\n");

            } else {
                printf("this month has 28 days\n");
            } break;

        default: printf("Sorry that is not a month, enter another value");




    }
    return 0;
}