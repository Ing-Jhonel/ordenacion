#include <iostream>
using namespace std;

void QuickSort(double a[], int n);
void reduce(double a[], int, int);

int main(){
	
	int tamanio;
	cout << "La cantidad de elementos a ingresar: ";
	cin >> tamanio;
	double arreglo[tamanio];
	
	for(int i=0; i<tamanio; i++){
		cout << i+1 << ". elemento: ";
		cin >> arreglo[i];
	}
	
	QuickSort(arreglo, tamanio);
	
	cout << "Ordenado con QuickSort: ";
	for(int i=0; i<tamanio; i++){
		cout << arreglo[i] << " ";
	}
	cout << endl;
	return 0;
}

void QuickSort(double a[], int n){
	reduce(a, 0, n-1);
}
void reduce(double a[], int inicio, int final){
	
	int izq=inicio;
	int der=final;
	int pos=izq;
	int cen=1;
	
	while(cen==1){
		cen=0;
		//recorrido de derecha a izquierda
		while(a[pos]<=a[der] && pos!=der){
			der--;
		}
		if(pos!=der){
			double aux=a[pos];
			a[pos]=a[der];
			a[der]=aux;
			pos=der;
			//recorrido de izquierda a derecha
			while(a[pos]>=a[izq] && pos!=izq){
				izq++;
			}
			if(pos!=izq){
				double aux=a[pos];
				a[pos]=a[izq];
				a[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if(pos-1 > inicio){
			//llamado recursivo a Quicksort para el subarreglo izquierdo
			reduce(a, inicio, pos-1);
		}
		if(pos+1 < final){
			//llamado recursivo a Quicksort para el subarreglo derecho
			reduce(a, pos+1, final);
		}
	}
}
