#include <iostream>
using namespace std;

void seleccionDirecta(double arr[], int n);

int main(){
	
	int tamanio;
	cout << "La cantidad de elementos a ingresar: ";
	cin >> tamanio;
	double arreglo[tamanio];
	
	for(int i=0; i<tamanio; i++){
		cout << i+1 << ". elemento: ";
		cin >> arreglo[i];
	}
	
	seleccionDirecta(arreglo, tamanio);
	
	cout << "Ordenado con seleccion directa: ";
	for(int i=0; i<tamanio; i++){
		cout << arreglo[i] << " ";
	}
	cout << endl;
	return 0;
}

void seleccionDirecta(double arr[], int n){
	
	int j;
	for(int i=0; i<n-1; i++){
		
		int menor = arr[i];
		int k = i;
		
		for(j=i+1; j<n; j++){
			if(arr[j] < menor){
				menor = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i];
		arr[i] = menor;
	}
}