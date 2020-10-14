#include <program1.h>
int main(int argc, char *argv[]) {
    int numero,n;
    leerM(n,"numero:");
    numero = (n>=0)? n:-n;
                            mostrar << "tiene ";
    if(numero >= 1000)      mostrar << "4 o mas digitos"  << "\n";
    else if(numero >= 100)  mostrar << "3 digitos"        << "\n";
    else if(numero >= 10)   mostrar << "2 digitos"        << "\n";
    else                    mostrar << "1 digito"         << "\n";
}