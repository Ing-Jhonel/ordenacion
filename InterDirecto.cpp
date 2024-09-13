#include <iostream>
using namespace std;

int main(){
	
	int n, num;
	
	cout << "Indique la cantidad de elementos del arreglo: ";
	cin >> n;
	cout << endl;
	
	int numeros[n];

	for(int i=0; i<n; i++){
		cout << i+1 << ". elemento: ";
		cin >> num;
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