
#include <program1.h>
principal
float a,b,c,x1,x2;
leer(a);
leer(b);
leer(c);

    int ra = b*b - 4*a*c;
    if(ra >= 0){
        x1 = (-b + sqrt(ra))/(2*a);
        x2 = (-b - sqrt(ra))/(2*a);
        mostrar << "x1:" << x1 << "\n";
        mostrar << "x2:" << x2 << "\n";
    }else{
        mostrar << "numero imaginario en la raiz";
    }

finPrincipal