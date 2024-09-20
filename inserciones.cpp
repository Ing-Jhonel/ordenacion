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
	char opcion;
	cout << endl << "a) Insercion directa." << endl << "b) Insercio binaria" << endl;
	cin >> opcion;
	
	switch(opcion){
		
		case 'a':
			InsercionDir(arreglo, tamanio);
			break;
		case 'b':
			InsercionBin(arreglo, tamanio);
			break;
		default:
			cout << "Indique una opcion valida.";
			break;
	}
	cout << endl;
	return 0;
}

void InsercionDir(double a[], int n){
	
	for(int i=2; i<n; i++){
		int aux = a[i];
		int k = i-1;
		
		while(k>0 && aux<a[k]){
			a[k+1] = a[k];
			k = k+1;
		}
		a[k+1] = aux;
	}
}

void InsercionBin(double a[], int n){
	
	for(int i=2; i<n; i++){
		int aux = a[i];
		int izq = 1;
		int der = i-1;
		
		while(izq <= der){
			int m = (izq + der)/2;
			if(aux < a[m]){
				der = m-1;
			} else {
				izq = m+1;
			}
		}
		int j = i-1;
		
		while(j>=izq){
			a[j+1] = a[j];
			j = j-1;
		}
		a[izq] = aux;
	}
}
void imprimir(int a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}

}