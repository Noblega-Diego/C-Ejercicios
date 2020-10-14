#include <program1.h>

principal
    float num1, num2, num3;
    leerM(num1,"num1:");
    leerM(num2,"num2:");
    leerM(num3,"num3:");
    if(num1 <= num2 && num1 <= num3)    mostrar << "El menor es: " << num1 << salto;
    else if(num2 <= num3)               mostrar << "El menor es: " << num2 << salto;
    else                                mostrar << "El menor es: " << num3 << salto;
finPrincipal