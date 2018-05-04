#include "Padre.h"

Padre::Padre()
{
	
	c=10;
	d=20;
	
	r= true;
}
	Padre::Padre(int _c, int _d, bool _r){
		r=_r;
		c=_c;
		d=_d;
		
	}
	
	
	void Padre::mostrarD(){
		
		cout<<endl<<"Padre"<<endl;
		cout<<endl<<"___________________"<<endl;
		cout<<endl<<"C: "<<c<<endl;
		cout<<endl<<"D: "<<d<<endl;
		
	}
