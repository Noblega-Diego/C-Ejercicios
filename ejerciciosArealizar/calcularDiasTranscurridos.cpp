#include <program1.h>
principal
    int ano,mes,dia, dias;
    bool anoBisiesto;

    leerM(ano,"año:");
    leerM(mes,"mes:");
    leerM(dia,"dia:");
    
    if(ano%100 == 0){                   //si es año secular
        if(ano%4 == 0 && ano%400 ==0)   //para ser Bisiesto tiene que ser divicible por 4 y 400
                anoBisiesto = true;
        else    anoBisiesto = false;
    }else{                              //si año no secular
        if(ano%4 == 0)                  //para ser Bisiesto tiene que ser divicible por 4
                anoBisiesto = true;
        else    anoBisiesto = false;
    }
    dias = dia;
    for(int transcurriendoMes = 1; transcurriendoMes < mes; transcurriendoMes++){
        switch (transcurriendoMes){
            case 2: dias +=(anoBisiesto? 29:28);
            break;
            case 1: 
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: dias += 31;
            break;
            case 4:
            case 6:
            case 9:
            case 11: dias += 30;
            break;
            default:
                mostrar << "error: mes ingresado incorrecto";
                break;
            break;
        }
    }
    mostrar << "total de dias:" << dias;
finPrincipal