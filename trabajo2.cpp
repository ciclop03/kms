#include <iostream>
using namespace std;


void intercambiarN (int a, int b){
	
	int c;
	
	b=c;
	c=a;
	a=b;
	
	cout << "ahora "<<b<<" es "<<a;
	cout << " y "<<a<< " es "<<b;
	
}


void intercambiarNsinC (int a, int b){
	
/// :                                 ^)    el espacio entre la nariz y los ojos
///                                         representa que tan muerto estoy por dentro	
	
	b=a+b;
	a=b-a;
	b=b-a;
	
	cout << "ahora "<<b<<" es "<<a;
	cout << " y "<<a<< " es "<<b;
	
}

void intercambiarB(int a, int b){
	
	a = b ^a;
	b = b^a; /// b es a
	a=a^b; /// blargh!
	
	
	cout << a <<" "<< b;
	
}



void esPerfecto(int a) {
	///n=a
	int res=0;
	
	for (int i = 1; i < a; i++) {
		
		if (a % i == 0){
			res = res +i;
		}
	}
	
	if (res == a) {
		cout << "el numero "<<a<<" es perfectamente perfecto en su propia perfeccion perfectamente perfecta";
	}
	else  {
		cout <<"no.";
	}
	
}


/*int potenciaRecursiva(int a, int b){
	
	
	
		if ( b == 0 ){
			
			cout << "la potencia 0 de " <<a<<" es 1";
		
		}else if ( b == 1 ){
			
			cout << "la potencia 1 de "<<a<<" es "<<a<<"\n";
			
		}else{
			
			cout <<"la potencia "<< b<<" de "<<a<<" es "<<( a * potenciaRecursiva( a, b-- ))<<"\n";
		}
	} 
	

*/

int potenciaRecursiva (int a, int b){
	
	if (b == 0) {
		
		return 1;
		
	} else if (b == 1){
		
		return a;
		
	}
	
	else{
		
		return( a * potenciaRecursiva( a, --b ));
	}
}



int main() {
	
	cout << potenciaRecursiva (10,5);
		
	return 0;
}

