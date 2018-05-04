#include "Hija.h"


	Hija::Hija(int _a, int _b, int _c, int _d, bool _r):Padre(_c,_d, _r){
		
		a=_a;
		b=_b;
		
		
	}
	
	
	void Hija::mostrarD(){
		cout<<endl<<"Padre and soon? "<<((r)? "Si": "No")<<endl;
		cout<<endl<<"___________________"<<endl;
		cout<<endl<<"A: "<<a<<endl;
		cout<<endl<<"B: "<<b<<endl;
		cout<<endl<<"C: "<<c<<endl;
		cout<<endl<<"D: "<<d<<endl;
		
		
	}
