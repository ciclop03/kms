#include <iostream>
using namespace std;

void concatenar(int a[], int b[], int lenA, int lenB){
	
	for (int i=0;i<lenB-1;i++) {
		
		a[lenA]= b[lenB -1];
		lenA ++;
		lenB ++;
		
	}
}


int main() {
	
	int m[]={4,5,6,0,0,0};
	
	int l[]={1,2,3};
	
	concatenar (m,l,3,3);
	for (int i=0;i<9;i++) {
		
		cout<<l[i]<<" ";
		
	}
	
	return 0;
}

