
#include <iostream>
#include <string>
#include <ostream>
#include <stdio.h>

bool isDigit(char num);
double menorNumString(std::string cadena);

int main(int argc, char const *argv[])
{
    std::string linea;

    std::getline(std::cin,linea);
    std::cout << "mayor: " << menorNumString(linea) << "\n";
    return 0;
}

double mayorNumString(std::string cadena){
    std::string num;
    char anterior = cadena[0];
    double mayor = 0; 
    double actual = 0;
    for (int i = 0; i < cadena.size(); i++)
    {
        
        if(isDigit(anterior) && isDigit(cadena[i])){
            num += cadena[i];
            if(i == cadena.size()-1){
                actual = std::stod(num);
            }
        }else if (isDigit(cadena[i]))
        {
            actual = std::stod(num);
            num = cadena[i];    //inicio del nuevo numero
        }

        if(actual > mayor){
            mayor = actual;
        }
        
        anterior = cadena[i];
    }
    
    return mayor;
}

bool isDigit(char caracter){
    switch (caracter)
    {
        case '.':
        case '+':
        case '-':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': return true;
    }
    return false;
}
