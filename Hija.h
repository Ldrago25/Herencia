#ifndef HIJA_H
#define HIJA_H

#include "Padre.h"

class Hija : public Padre
{
	private:
		int a;
		int b;
		
	public:
		
		Hija(int , int , int , int, bool);
		void mostrarD();
		
	protected:
};

#endif
