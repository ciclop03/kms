#include <iostream>
using namespace std;


class dynamicArray {
	int size;
	int *data;// ya que vamos a tomar un puntero (areglo).
	
public:
	dynamicArray(int size, int arr[])
	{
		this -> size = size;
		this -> data = new int [size];
		for (int i=0; i<size ;i++){
			data [i]=arr[i];
		}
	}
	
	
	
	
	
	void insert(int pos, int elem){
		
		int *nuevo = new int [size ++];
		for (int i=0; i<pos;i++){
			nuevo[i]=data[i];
		}
		nuevo [pos]=elem;
		for (int i=pos;i<size;i++){
			nuevo[i+1]=data[i];
		}
	 	delete []data;
		data = nuevo;
		
	}
	
	void eliminar (int pos){
		
		int *nuevo =new int [size --];
		for (int i=0; i<pos ;i++){
			nuevo[i]=data[i];
		
		}
		for (int i=pos;i<size ;i++){
			nuevo[i]= data[i+1];
		}
		data = nuevo;
	}
	
	void insertatras(int elem){
		
		int *nuevo = new int [size ++];
		
		nuevo [0]=elem;
		for (int i=1;i<size;i++) {
			nuevo [i-1]=data [i];
		}
		delete []data;
		data = nuevo;
}
	
	
	
	void imprimir (){
		for (int i=0;i<size;i++) { 
			cout << data[i];			
		}
		cout << "\n";
	}
	
	
	
	void burbuja(){
		
		int c;
		for(int i = 1;i<size;++i){
			for(int j = 0;j<(size-i);++j){
				if(data[j]>data[j+1]){
				
					c=data[j];
					data[j]=data[j+1];
					data[j+1]=c;
			}	}	
		}
	}
	
	int nprimos(){
		
		int c=0;
		for(int j=0; j<size; j++){
			int a=0;
			int n = data[j];
			for(int i=1;i<(n+1);i++){
				if(n%i==0){
					a++;
				}
			}
			if(a!=2){
				
			}else if(n
				
				==1){
				c+=1;
			}else{
				c+=1;
			}
		}
		return c;
	}

	
};


int main(int argc, char *argv[]) {
	int l[]={1,2,3,4,5,8};
	dynamicArray a(6,l);
	//a.imprimir();
	a.insert(4,77);
	
	a.imprimir();
	cout << a.nprimos();



}

