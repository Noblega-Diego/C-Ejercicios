/*
    program1.h es el archivo de traducci�n de seudoc�digo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Leer tres valores y determinar cu�l (primero, segundo o tercer valor) es el mayor.
*/
principal                                                       // Unidad de programa principal
real uno, dos, tres;
limpiar;                                                        // Limpia la pantalla.
leerM(uno,"Valor 1:");
leerM(dos,"Valor 2:");
leerM(tres,"Valor 3:");
si(uno >= dos Y uno >= tres) entonces                           //compara el a >= b y c
    mostrar << "El primero es mayor..." << salto;
    finSi
si(dos >= uno Y dos >= tres) entonces                           //compara el b >= a y c
    mostrar << "El segundo es mayor..." << salto;             
    finSi
si(tres >= uno Y tres >= dos) entonces                          //compara el c >= a y b
    mostrar << "El tercero es mayor..." << salto;
    finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
