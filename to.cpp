#include <iostream>
using namespace std;



///implemente una funcion que reciba un arreglo y retorne la suma de los elementos
/*int tamanoAry(int a[]){
	
	int l;
	l=sizeof(a)/sizeof(a[0]);
	return l;
}
*/
int sumaAry( int a [], int len){
	

	int res = 0;
	//cout << sizeof(a)<<"\n";
	//int w=tamanoAry(a)
		//cout <<w<<"\n ";
		
		for (int i=0;i< len;i++) {
			
			res = res + a[i];
			
	}
		
		
		
		return res;
}

///invertir en bison-dolares:
void invertir(int a[],int len){
	
	//int * puntero;
	//puntero = a;
	int n;
	int l=1;
	//invalid conversion from int to *int ... entonces ...
	
	for (int i=0;i<len-1;i++) {   
		
		n=a[i];//n=2				n = 2
		a[i]=a[len-1];//a[0]=20		4 3 3 1
		a[len-1]=n;//a[10]=2?   	4 3 2 1
		
		//l++;
		len--;
		/*if (len==1 or len==0){
			break;
			
		}*/
	} 
	

}


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
	
		int m [11]= {2,4,3,6,7,8,1,11,7,9,20};
		/*cout <<sumaAry(m)<<"\n";//ihgfgduygvcxgjhgfdytdr87654ted
		cout <<sizeof (m);//44
		cout <<"\n"<<sizeof(int);//4
		cout <<"\n"<< sizeof (m)/sizeof (int);//11
		/
			
			///
			
			int m []= {2,4,2,6,7,2,1,6,7,9,10};
			//invertir (m,10);
			
		*/
		cout << sumaAry(m,11)<<"\n";
		invertir (m,11);
		cout <<m[0]<<" "<<m[10];
		for(
			
			return 0;
}








