#include <iostream>
using namespace std;



bool esprimo(int x,int cont=0){
	for(int i=1;x>=i;i++){
		if(x%i==0)
			cont++;
	}
	if(cont==2  or cont==1)
		return 1;
	return 0;
}

void primosn(int x,int c=1){
	int n=1;
	while (x>=c){
		if (esprimo(n)){
			c++;
			cout<<n;
			if(x>=c)
				cout<<",";
		}		
		n++;
	}
}

int main(int argc, char *argv[]) {
	
	int x;
	cin>>x;
	
	cout<<esprimo(x)<<endl;
	primosn(x);
	return 0;
}

int main(int argc, char *argv[]) {
	
	return 0;
}

