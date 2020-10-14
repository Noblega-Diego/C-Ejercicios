#include <program1.h>

principal
    float a = 12;
    float b = 50;
    float c = 33;
    float d = 3;
    si(c > 0 && d != 0 && b > 0){
        float r1 = pow(c,d);
        float r2 = b * r1;
        float r3 = a - r1;
        
        float r4 = a / d;
        float r5 = b * c;
        float r6 = r5 - r4;
        float r7 = pow(b,r6);
        float r8 = a * r7;
        
        float r9 = 4 * a * c;
        float r10 = pow(b, 2);
        float r11 = r10 - r9;
        mostrar << "es: " << ((r3 >= r8 && r11 >= d)? "verdadero":"falso") << "\n"; 
    }
finPrincipal