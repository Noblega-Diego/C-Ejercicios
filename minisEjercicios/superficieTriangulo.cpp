#include <program1.h>

principal
	real base = 0.0;
	real altura = 0.0;
	real superficie = 0.0;
	mostrar << "ingrese la base:";
	leer(base);
	mostrar << "ingrese la altura:";
	leer(altura);
	if(base > 0 && altura > 0){
		mostrar << "superficie:"<< (base*altura) / 2 << salto;
	}else {
		mostrar << "algunos de valores ingresados son negativos o 0" << salto;
	}
finPrincipal


