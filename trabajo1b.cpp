#include <iostream>
#include <string>
using namespace std;
//edad
	bool gimmeurage(int edad){
		
		return (edad >= 18);
		
	}
	
//mayor menor promedio
	
	void mmp (int mm1, int mm2, int mm3, int &may, int &men, float &prom){
		may = (mm1>=mm2)? mm1 : mm2;
		may = (may >= mm3)? may : mm3;
		men = (mm1<=mm2)? mm1 :mm2;
		men = (men <= mm3)? men : mm3;
		prom = (mm1 + mm2 + mm3)/ 3;
		
		
	}

//n numeros separados por comas
	
	int darNA(int n02, int g){
		
		cout << g << ",";
		if (g==n02-1){
			cout << ++g;
				
		}else{
			return darNA(n02,++g);
		}
	}
		
	

//cuarto 
	int id3( int e01, int e02){
		
		//multiplo de 2
		if (e01%2 == 0){
			cout <<"\n"<< e01 << " es multiplo de dos.";
		}else{
			cout <<"\n"<< e01 << " no es multiplo de dos.";
		}
		if (e02%2 == 0){
			cout <<"\n"<< e02 << " es multiplo de dos.";
		}else{
			cout <<"\n"<< e02 << " no es multiplo de dos.";
		}
		
		//si el primero es multplo del segundo
		if (e02 % e01 == 0) {
			cout << "\n el prier numero( "<< e02 << " ) es multiplo del segundo ( " << e01 << ").";
			
		} else {
			cout << "\n el prier numero( "<< e02 << " ) no es multiplo del segundo ( " << e01 << ").";
		}
		// si el 1ro al cuadrado es igual al segundo
		if (e01*e01==e02) {
			cout <<"\n el primer numero ( "<< e01 << " ) elevado al cuadrado es igual al primero ( " << e02 << ").";
		} else {
			cout <<"\n el primer numero ( "<< e01 << " ) elevado al cuadrado es diferente al primero ( " << e02 << ").";
		}
		
	}
	
	
// digitos separados por tabulaciopn
	

	int tab (int cf01){
		int abi,bal,cam,dee,ed;
		
		
		abi = cf01 / 10000;
		cf01 = cf01 - abi *10000;
		
		bal = cf01 / 1000;
		cf01 = cf01 - bal * 1000;
		
		cam = cf01 / 100;
		cf01 = cf01 - cam * 100;
		
		dee = cf01 /10;
		cf01 = cf01 - dee * 10;
		
		ed = cf01;
		
		cout << abi <<"\t,"<< bal << "\t," << cam << "\t," << dee << "\t," << ed << ".";
	}
	
	// quinto problem
	//NUMERO PRIMO
	
	void ynPrimo(int op){
		
		int r,c;
		r=2;
		///op es el primo
		c=1;
		
		if(op == 2 or op == 1){
			cout << "\n" << op << " es un numero primo.";
		}
		
		while (r < op) {
			if (op % r != 0) {
				
				c = c + 1;
			}
			r = r + 1;
		}
		if (c == op -1 ) {
			cout << "\n" << op << " es un numero primo.";
			
		} else {
			
			cout << "\n" << op << " no es un numero primo.";
			
			
		}
	}
	
	
	// 5 digitos seprados por tabulaciones
	
	void separaCiDi(int cinco){
		int a,b,c,d,e;
		
		a = cinco / 10000;
		cinco = cinco - a *10000;
		
		b = cinco / 1000;
		cinco = cinco - b * 1000;
		
		c = cinco / 100;
		cinco = cinco - c * 100;
		
		d = cinco /10;
		cinco = cinco - d * 10;
		
		e = cinco;
		
		cout << a <<"\t,"<< b << "\t," << c << "\t," << d << "\t," << e << ".";
	}
	
	
	
	//5 digitos palindromo
	
	void ynPalindromo(int five){
	
		int m,l,b,ab,de,v;
		
		/// --ab--
		v = five;
		m = (five /10000) * 10;
		five = five - m * 1000;
		
		l = five / 1000;
		five = five - l * 1000;
		
		ab = m + l;
		
		/// --de--
		
		int e, d;
		b = d / 100;
		five = five - b * 100;
		
		d = five /10;
		five = five - d * 10;
		
		e = five *10; 
		de = d + e;
		
		if (ab == de) {
			cout << "\nel numero "<< v <<" es palindromo.";
			
		} else {
			cout << "\nel numero "<< v <<" no es palindromo.";
			
		}
	}
		
/// año biciesto
		
	bool esBi(int kol){
		
		
		if (kol % 4 == 0)
		{
			if (kol % 100 == 0)
			{
				if (kol % 400 == 0)
					kol =1;
				else
					kol=0;
			}
			else
				kol=1;
		}
		else
			kol=0;
	}	
	///  funciones---------------------------------------------o
	
	
	///kmw no everyone calm down (beat)----------------------
	
	
	
	
	
	
	
	int main (){
		int may, men;
		float prom;
		mmp(3, 4, 5, may,  men,  prom);
		cout <<"promedio =:"<< prom <<"\nmenor =:"<<men<<"\nmayor="<<may <<"\n";
		
		
		darNA (20,1);
		int j,k;
		j=20;
		k=12;
		id3( j,k );
		
		ynPrimo(45);
		
		separaCiDi(98234);
			
		return 0;
			
	}
	
	








/*int main(int argc, char *argv[]) {
	
	return 0;
}

*/
