#include <iostream>
#include <string>

using namespace std;

string nombre[3], genero[3];

int op, id = 1;
bool a = true;

void main() {

	system("color 0A");

	while (a == true) {

		cout << "\nALTA DE ARTICULOS" << endl;
		cout << "1. Agregar" << endl;
		cout << "2. Mostrar" << endl;
		cout << "3. Salir" << endl;
		cin >> op;

		switch (op) {

		case 1:

			cin.ignore();
			for (int i = 0; i < 3; i++) {

				cout << "\nIngresa nombre " << i + 1 << ": ";
				getline(cin, nombre[i]);
				cout << "Ingresa genero: ";
				getline(cin, genero[i]);
			}
			break;

		case 2:

			cout << "\nLISTA DE JUEGOS" << endl;
			for (int i = 0; i < 3; i++) {
				cout << id + i << ": " << nombre[i] << endl;
			}
			break;

		case 3:

			a = false;
			system("cls");
			cout << "Estas saliendo..." << endl;
			break;

		default:

			cout << "\nERROR... Seleccione otra opcion..." << endl;
		}
	}
	system("pause>null");
}
