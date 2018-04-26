#include <iostream>
using namespace std;

void copiardeTaS(int t[], int s[], int lents){ //deben ser del mismo tamaño
	
	for (int i=0;i<lents; i++){
		
		s[i]=t[i];
		
	}
	
}


void copiarDYR(int t[], int s[], int lents){
	
	int* poin = t;
	int* ters = s;
	for (;*poin < lents; *poin = *(poin + 1), *ters = *(ters +1)){
		
		*poin = *ters;
		
		
	}
	
}













int main() {
	
	int t[]={12,13,14,15,16,17,18};
	int s[]={2,3,4,5,6,7,8};
	
	/*copiardeTaS(t,s,7);
	for (int i=0; i<7; i++){
		cout<< s[i]<<" ";
	}
	*/
	copiarDYR(t,s,7);
	for (int i=0; i<7; i++){
		cout<< s[i]<<" ";
	}
	return 0;
}

