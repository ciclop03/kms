#include <iostream>
using namespace std;
//Primer ejercicio:
//Implementar un programa que evalue si la edad ingresada por teclado se refiere
//	a una persona mayor o menor de edad.
int main(int argc, char *argv[]) {
	
	int edad;
	cout << "introduzca su edad:";
	cin >> edad;
	
	if (edad>=18) {
		cout << "con " << edad << " a�os, usted es mayor de edad.";
	
	} else {
		cout << "con " << edad << " a�os, usted es menor de edad.";
		
	}

	



//Segundo ejercicio:
//. Implementar un programa que solicite un n�umero n e imprima los n�umero
// desde el 1 hasta n separados por comas. OJO, despues del �ultimo n�umero no debe imprimir la �,�.
//int main(int argc,char *argv[]) {
	
	int number,pizza;
	pizza = 1;
	cout << "\n escriba un numero:";
	cin >> number;
	
	while ( pizza < number ) {
		
		cout << pizza << ",";
		if (pizza==number-1){
			cout << pizza+1 << ".";
		}
		
		pizza = pizza + 1;
		
		
	}
// tercer problema
// cuarto problema
	
	int guile,rashid;
	cout << "\n escriba 2 numero:";
	cin >> guile;
	cin >> rashid;
	
	//multiplo de 2
	if (rashid%2 == 0){
		cout <<"\n"<< rashid << " es multiplo de dos.";
	}else{
		cout <<"\n"<< rashid << " no es multiplo de dos.";
	}
	if (guile%2 == 0){
		cout <<"\n"<< guile << " es multiplo de dos.";
	}else{
		cout <<"\n"<< guile << " no es multiplo de dos.";
	}
	
//si el primero es multplo del segundo
	if (guile%rashid == 0) {
		cout << "\n el prier numero( "<< guile << " ) es multiplo del segundo ( " << rashid << ").";
		
	} else {
		cout << "\n el prier numero( "<< guile << " ) no es multiplo del segundo ( " << rashid << ").";
	}
	// si el 1ro al cuadrado es igual al segundo
	if (guile*guile==rashid) {
		cout <<"\n el primer numero ( "<< guile << " ) elevado al cuadrado es igual al primero ( " << rashid << ").";
	} else {
		cout <<"\n el primer numero ( "<< guile << " ) elevado al cuadrado es diferente al primero ( " << rashid << ").";
	}
	
	// quinto problem
	//NUMERO PRIMO
	
	int ryu,ken,chunli;
	ryu=2;
	cout << "\n escriba un numero:";
	cin >> ken;
	chunli=1;
	
	if(ken == 2 or ken == 1){
		cout << "\n" << ken << " es un numero primo.";
	}
	
	while (ryu < ken) {
		if (ken % ryu != 0) {
			
			chunli = chunli + 1;
		}
		ryu = ryu + 1;
	}
	if (chunli == ken -1 ) {
		cout << "\n" << ken << " es un numero primo.";
		
	} else {
		
		cout << "\n" << ken << " no es un numero primo.";
	

	}
	
	
// 5 digitos seprados por tabulaciones
	
	
	int kolin,abigail,balrog,cammy,deejay,ed;
	cout << "\n introduzca un numero de 05 digitos: ";
	cin >> kolin; 
	
	abigail = kolin / 10000;
	kolin = kolin - abigail *10000;
	
	balrog = kolin / 1000;
	kolin = kolin - balrog * 1000;
	
	cammy = kolin / 100;
	kolin = kolin - cammy * 100;
	
	deejay = kolin /10;
	kolin = kolin - deejay * 10;
	
	ed = kolin;
	
	cout << abigail <<"\t,"<< balrog << "\t," << cammy << "\t," << deejay << "\t," << ed << ".";
//5 digitos palindromo
	
	int dhalsim,mika,laura,birdie,ab,de,vega;
	cout << "\ningrese un numero de 05 digitos:";
	cin >> dhalsim;
	
	//AB
	vega = dhalsim;
	mika = (dhalsim /10000) * 10;
	dhalsim = dhalsim - mika * 1000;
	
	laura = dhalsim / 1000;
	dhalsim = dhalsim - laura * 1000;
	
	ab = mika + laura;
	
	//DE
	//dhalsim ahora es de 3 digitos
	// hay que quitarle el primero
	// e invertirlos
	int e, d;
	birdie = dhalsim / 100;
	dhalsim = dhalsim - birdie * 100;
	
	d = dhalsim /10;
	dhalsim = dhalsim - d * 10;
	
	e = dhalsim *10; 
	de = d + e;
	
	//el "if"
	if (ab == de) {
		cout << "\nel numero "<< vega <<" es palindromo.";
		
	} else {
		cout << "\nel numero "<< vega <<" no es palindromo.";
	}
	
// a�o biciesto
	
	
	int karin;
		
	cout << "introduzca un a�o: ";
	cin >> karin;
	// use la siguiente informacion:
	//todos los a�os divisibles entre 4 son biiestos excepto los que tambien son dibisibles entre 100
	//estos solo lo son si son dibisibles entre 400 (ejemplo 400, 800, 1200, etc)
	if (karin % 4 == 0)
	{
		if (karin % 100 == 0)// no se realiza otra coprobacion
		{
			if (karin % 400 == 0)
				cout << "\n" << karin << " es biciesto.";
			else
				cout << "\n" << karin << " no es biciesto.";
		}
		else
			cout << karin << " es un a�o biciesto.";
	}
	else
		cout << karin << " no es un a�o biciesto.";
		
	
// fibonacci
	
	int oldzeku,youngzeku,alex,akuma;
	
// factorial
	
	/*int n,l,o,ss;
	cout << "introduzca un numero:";
	cin >> n;

	o=1;
	ss = 1
	if (n == 0){
		cout << "1";
	}
	// se cambia 1=0 por 1=1, ya que toda operacion daria 0.
	while (ss <= n) {
		
		l = ss * (ss + 1);
		
		ss += 2
		
		cout << "la factorial de l es igual a " << o <<".";
		*/
	int n,l,o;
	n = 1;
	l = 1;
	
	cout << "ingrese un n�mero:";
	cin >> o;
	
	while (n <= o) {
		l = l * n;
		n += 1;
	
	}
	cout << "la factorial de su numero es " << l;
	
//fibonacci
	
	cout << "ingrese el numero de suceciones fibonacci que desee imprimir: ";
	int omc;	
	cin >> omc;	
	int nna=0,vsd=1,atq=2,sfv;
	
	// hay que imprimir estos dos antes.
	
	cout << nna <<" "<< vsd;
	
	// ahora el while
	
	while (atq < omc) {

		atq++;
		sfv = nna + vsd;
		cout << "," <<sfv;
		nna = vsd;
		vsd = sfv;
		
	}
	
	// el mayor de 3
	int aa,bb,cc;
	cout << "ingrese 03 numeros:";
	cin >> aa;
	cin >> bb;
	cin >> cc;
	if (aa > bb and aa > cc) {
		cout << a << " es el mayor";
		
	} else {
		if (bb > cc ) {
			cout << b << " es el mayor";
			
		} else {
			cout << c << " es el mayor";
			
		}
		
	}

	return 0;
}

