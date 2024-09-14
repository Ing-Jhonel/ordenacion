#include <iostream>
using namespace std;

void interDirDer(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i; j++){
			if(arr[j]>arr[j+1]){
				int aux = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
}
void interDirIz(int arr[], int n){
	
	for(int i=n; i>0; i--){ 
		for(int j=n-1; j>n-i; j--){
			if(arr[j]<arr[j-1]){
				int aux = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = aux;
			}
		}
	}
}
void interDirSenial(int arr[], int n){
    bool intercambio;
    
    for(int i=0; i<n-1; i++){
        intercambio = false;
        
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                intercambio = true;
            }
        }

        if(!intercambio){
        	break;	
		}
    }
}

void mostrarArreglo(int arr[], int n){
	
	for(int i=0; i<n; i++){
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
		
		cout << endl << endl << "Antes" << endl << endl;
		mostrarArreglo(numeros, elementos);
		switch (opcion){
			case 'a':
				interDirDer(copia, elementos);
				break;
			case 'b':
				interDirIz(copia, elementos);
				break;
			case 'c':
				interDirSenial(copia, elementos);
				break;
			case 'd':
				break;
			case 'e':
				break;
			default:
				cout << "Indique una opcion valida.";
				break;
		}
		cout << endl << endl << "Despues" << endl << endl;
		mostrarArreglo(copia, elementos);
		cout << endl << endl;
	} while (opcion != 'e');
	cout << "Saliendo del programa...";
	return 0;
}
