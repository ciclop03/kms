#include <iostream>
using namespace std;


///implemente una funcion que reciba un arreglo y retorne la suma de los elementos
int tamanoAry(int a[]){
	
	int l;
	l=sizeof(a)/sizeof(a[0]);
	return l;
}
int sumaAry( int a []){
	
	//for i in ¡*range*! len(a):
	//	if i<len(a)-1:
	//		res+=a[i]
	// facil... ¡¡¡¡FACIL!!!!
	
	int res = 0;
	//cout << sizeof(a)<<"\n";
	int w=tamanoAry(a)
	//cout <<w<<"\n ";
		
	for (int i=0;i< w;i++) {
			
		res = res + a[i];
		
	}
	
	
	
	return res;
}

///invertir elementos:

//void invertir(int a[], int cont){
	
/*	int q;
	for (int i = 0; i < cont; ++i)
		
	{
		a[i] = q;
		q = a[cont-i-1];
		a[cont-i-1] = a[i];
		a[i] = q;
		
		cout << q << " ";
	}
}
*/int main() {
	///main de la pregunta 1:
	//int l[]= {65,2,1,3,7,98,2};
	/
	int m [11]= {2,4,2,6,7,2,1,6,7,9,10};
	cout <<sumaAry(m)<<"\n";//ihgfgduygvcxgjhgfdytdr87654ted
	cout <<sizeof (m);//44
	cout <<"\n"<<sizeof(int);//4
	cout <<"\n"<< sizeof (m)/sizeof (int);//11
 	/
	
	///
	
	int m []= {2,4,2,6,7,2,1,6,7,9,10};
	//invertir (m,10);
	
	
	return 0;
}

