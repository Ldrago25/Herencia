#include <iostream>
#include "Padre.h"
#include "Hija.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Padre *g= new Padre(10,20,true);
//	g->mostrarD();
	
	Hija *hija= new Hija(10,20,30,40,true);
	hija->mostrarD();
	
	return 0;
}
