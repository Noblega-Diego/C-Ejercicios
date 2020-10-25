#include <program1.h>
/**
 * 
 * 
 */
funcion int cantidadMes(int mes, int ano);

principal
	
finPrincipal

funcion int cantidadMes(int mes, int ano){
    logico bisiesto;
    si(ano%100 == 0) entonces             //si es año secular
        si(ano%4 == 0 && ano%400 ==0) entonces  //para ser Bisiesto tiene que ser divicible por 4 y 400
                bisiesto = true;
        sino    
                bisiesto = false;
        finSi
    sino                      //si año no secular
        si(ano%4 == 0) entonces               //para ser Bisiesto tiene que ser divicible por 4
                bisiesto = true;
        sino    
                bisiesto = false;
        finSi
    finSi

    segunCaso(mes)
    caso 1:
    caso 3:
    caso 5:
    caso 7:
    caso 8:
    caso 10:
    caso 12: retorna(31);
    otroCaso 4:
    caso 6:
    caso 9:
    otroCaso 2: retorna((bisiesto)? 29:30);
    finSegun;
    retorna(-1);
}