#include <iostream>
using namespace std;


///implemente una funcion que reciba un arreglo y retorne la suma de los elementos

int sumaAry( int a []){
	
	int res = 0;
	int l = sizeof(a);
	
	for (int i=0;i==1||i+1==l  ;i++) {
		
		res =res+ a[i]+a[l];
		
		l--;
		
	return res;
	}
	
	
}










int main() {
	
	int m [10]= {2,4,2,6,7,2,1,6,7,9};
	cout <<sumaAry(m)<<" ";
	
	return 0;
}

