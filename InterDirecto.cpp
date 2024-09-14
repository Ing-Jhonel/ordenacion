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
void interDirBidireccional(int arr[], int n) { //va de izquierda a drecha mientras ordena y se devuelve pero se resta -1 al fin, y luego -1 al inicio y asi, hasta llegar al medio, hbiendo ordenado todo
    int inicio = 0;
    int fin = n-1;
    bool intercambio;
	
	// el do-while ayuda a que se haga el mismo bucle cada iteracion
    do {
    	
        intercambio = false;

        for (int i=inicio; i<fin; i++) {
            if (arr[i] > arr[i+1]) {
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                intercambio = true;
            }
        }
        fin--;

        if (!intercambio) break;

        intercambio = false;

        for (int i=fin; i>inicio; i--) {
            if (arr[i]<arr[i-1]) {
                int aux = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = aux;
                intercambio = true;
            }
        }
        inicio++;

    } while (inicio <= fin);
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
		cout << endl << endl;
		
		bool imprimir=true;
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
				interDirBidireccional(copia, elementos);
				break;
			case 'e':
				imprimir=false;
				break;
			default:
				cout << "Indique una opcion valida.";
				imprimir=false;
				break;
		}
		if(imprimir){
			cout << "Antes" << endl << endl;
			mostrarArreglo(numeros, elementos);
			cout << endl << endl << "Despues" << endl << endl;
			mostrarArreglo(copia, elementos);
		}
		cout << endl << endl << endl;
	} while (opcion != 'e');
	cout << "Saliendo del programa..." << endl << endl;
	return 0;
}
