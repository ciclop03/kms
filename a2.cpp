#include <iostream>
using namespace std;



/// invertir elementos matriz

int * invertir(int a[],int tes){
	
	int * puntero;
	puntero = a;
	int n;
	int l=1;
	//invalid conversion from int to *int ... entonces ...
	
	for (int i=0;i<tes;i++) {
			
		n=a[i];
		a[i]=a[tes-l];
		a[tes-l]=n;
			
		l++;
		tes -= 2;
			if (tes==1 or tes==0){
				return puntero;
			}
	} 
			
		
		
	
	
	
	
}
int main(int argc, char *argv[]) {
	
	
	
	int m[]={1,2,3,4,5,6,7,8,9,0};
	
	cout << invertir (m,10);
	
	return 0;
}

