#include <iostream>
using namespace std;

void ShellSort(double arr[], int n);

int main(){
	
	int tamanio;
	cout << "La cantidad de elementos a ingresar: ";
	cin >> tamanio;
	double arreglo[tamanio];
	
	for(int i=0; i<tamanio; i++){
		cout << i+1 << ". elemento: ";
		cin >> arreglo[i];
	}
	
	ShellSort(arreglo, tamanio);
	
	cout << "Ordenado con ShellSort: ";
	for(int i=0; i<tamanio; i++){
		cout << arreglo[i] << " ";
	}
	cout << endl;
	return 0;
}

void ShellSort(double a[], int n){
	
	int k=n;
	while(k>1){
		k=k/2;
		int cen=1;
		while(cen==1){
			cen=0;
			int i=0;
			while(i+k < n){
				if(a[i+k] < a[i]){
					double aux=a[i];
					a[i]=a[i+k];
					a[i+k]=aux;
					cen=1;
				}
				i++;
			}
		}
	}
}
