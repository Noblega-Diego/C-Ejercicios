#include <program1.h>                                           // Archivo de traducción de pseudocódigo a C++
/**
*    Enunciado: Euclides estableció un algoritmo que lleva su nombre y que permite calcular 
                el máximo com�n divisor (mcd) entre dos numeros naturales a y b (siendo a > b) de la siguiente forma:
                - Si b = 0 entonces mcd(a,b) = a y el algoritmo termina.
                - En otro caso, mcd(a,b) = mcd(b,r) donde r es el resto de dividir a entre b.
                    Para calcular mcd(b,r) se utilizan estas mismas reglas.
                Ejemplifique para a = 54321 y b = 432 y otros 2 valores de su elección.
*/
funcion entero mcd(entero a, entero b) {
entero resul;
si(b == 0) entonces
    resul = a;
sino
    resul = mcd(b,a % b);
    finSi
regresa(resul);
}

principal                                                       // Unidad de programa principal
    entero uno, dos;
    limpiar;                                                        // Limpia la pantalla.
    repetir
        leerM(uno,"Primer valor:");
    hasta(uno > 1);
    repetir
        leerM(dos,"Segundo valor:");
    hasta(dos > 0 Y uno > dos);
    mostrar << "El mcd entre " << uno << " y " << dos << " es:" << mcd(uno,dos) << salto;
    pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

