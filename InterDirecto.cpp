#include <iostream>
using namespace std;

void interDirDer(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i; i++){
			if(arr[j]>arr[j+1]){
				int aux = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
}

void mostrarArreglo(int arr[]){
	
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	
	int elementos, num;
	
	cout << "Indique la cantidad de elementos del arreglo: ";
	cin >> elementos;
	cout << endl;
	
	int numeros[elementos];
	int copia[elementos];
	
	for(int i=0; i<elementos; i++){
		cout << i+1 << ". elemento: ";
		cin >> numeros[i];
		copia[i]=numeros[i];
	}
	
	cout << endl << endl << endl;
	
	char opcion;
	do{
		cout << "Indique el metodo de intercambio: " << endl << endl;
		cout << "a) Intercambio directo por la derecha." << endl;
		cout << "b) Intercambio directo por la izquierda." << endl;
		cout << "c) Intercambio directo con senial." << endl;
		cout << "d) Intercambio directo bidireccional." << endl;
		cout << "e) Salir." << endl << endl;
		
		cin >> opcion;
		
		cout << endl << endl;
		
		switch (opcion){
			
			case 'a':
				interDirDer(copia, elementos);
				mostrarArreglo(copia);
				break;
			case 'b':
				break;
			case 'c':
				break;
			case 'd':
				break;
			case 'e':
				cout << "Saliendo del programa...";
				break;
		}
		cout << endl << endl;
	} while (opcion != 'e');
	
	return 0;
}