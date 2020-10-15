/**
 * Se tienen datos provistos por un GPS que nos indica posiciones sucesivas indicadas encoordenadas cartesianas (x;y). 
 * Para indicar la finalización de la secuencia se proveeun par de coordenadas correspondiente al origen (0;0).
 * 
 * */
#include <program1.h>
/**
 * 
 * 
 */

principal
	real Xnew,Ynew,x = 0.0,y= 0.0,distancia,distanciaMenor;
    entero n = 1,numeroRecorridoMenor = 0;
    iterar
        leerM(Xnew,"x:");
        leerM(Ynew,"y:");
        distancia = distancia(Xnew,Ynew,x,y);               // se calcula la distacia del ultimo recorrido
        if(n == 1){                                         //se empiza a comparar desde el primer recorrido
            distanciaMenor = distancia;                     //se lo almacena como al menor al primer recorrido
        }                                           
        
        if(distancia < distanciaMenor){                     //si el recorrido actual es mayor al menor guardado
            distanciaMenor = distancia;                     //se guarda como menor al ultimo recorrido
            numeroRecorridoMenor = n;                       //y se almacena el numero del recorrido
        }
        salirSi(Xnew == 0 && Ynew == 0);                    //si la coordenada ingresada es el punto inicial se sale del bucle
        
        //se guarda como la coordenada como el nicio de el siguiente recorrido
        x= Xnew;                                           
        y= Ynew;                                            
        n++;                                                //y se incrementa el numero 
    finIterar
    mostrar << "ultima Distancia:" << distancia << "\n";
    mostrar << "menor recorrido: " << numeroRecorridoMenor << " con una distancia de: " << distanciaMenor << "\n";
finPrincipal