#include <iostream>
using namespace std;

void InsercionDir(double arr[], int n);
void InsercionBin(double arr[], int n);
void imprimir(double arr[], int n);
void change(double a[], double b[], int n);

int main(){
	
	int tamanio;
	cout << "La cantidad de elementos a ingresar: ";
	cin >> tamanio;
	double arreglo[tamanio];
	double copia[tamanio];
	for(int i=0; i<tamanio; i++){
		cout << i+1 << ". elemento: ";
		cin >> arreglo[i];
		copia[i]=arreglo[i];
	}
	char opcion;
	do{
		cout << endl << "a) Insercion directa." << endl << "b) Insercio binaria" << endl << "c) Salir" << endl << endl;
		cin >> opcion;
		
		cout << endl << endl;
		switch(opcion){
			case 'a':
				InsercionDir(copia, tamanio);
				cout << "Antes: "; imprimir(arreglo, tamanio); cout << endl;
				cout << "Despues: "; imprimir(copia, tamanio);
				break;
			case 'b':
				InsercionBin(copia, tamanio);
				cout  << "Antes: "; imprimir(arreglo, tamanio); cout << endl;
				cout << "Despues: "; imprimir(copia, tamanio);
				break;
			case 'c':
				cout << "Saliendo...";
				break;
			default:
				cout << "Indique una opcion valida.";
				break;
		}
		cout << endl << endl;
		change(copia, arreglo, tamanio);
	}while(opcion!='c');
	cout << endl;
	return 0;
}

void change(double a[], double b[], int n){

	for(int i=0; i<n; i++){
		a[i]=b[i];
	}
	
}
void imprimir(double a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}

void InsercionDir(double a[], int n){
	
	for(int i=1; i<n; i++){
		double aux = a[i];
		int k = i-1;
		
		while(k>=0 && aux<a[k]){
			a[k+1] = a[k];
			k--;
		}
		a[k+1] = aux;
	}
}

void InsercionBin(double a[], int n){
	
	for(int i=1; i<n; i++){
		double aux = a[i];
		int izq = 0;
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
			j--;
		}
		a[izq] = aux;
	}
}
void imprimir(int a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}

}
