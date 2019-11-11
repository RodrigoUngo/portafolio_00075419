#include <iostream>
#include <cstdio>
using namespace std;

typedef struct Pais {
	char nombre[50];
	char capital[50];
	int habitantes;
	
}Pais;

typedef struct Continente {
	char continent[50];
}Continente;

int main(void)
{
	Continente nombre[5];
	Pais name[5];
	Pais capitol[5];
	Pais habitants[5];
	int suma = 0;
	for(int i=0;i<5;i++){
		cout << "Ingrese el nombre del continente: ";
		fflush(stdin);
		cin.getline(nombre[i].continent,50);
		for (int j=0;j<5;j++){
			cout << "Ingrese el nombre del pais " << j+1 << " :" << endl;
			fflush(stdin);
			cin.getline(name[j].nombre,50);
			cout << "Ingrese la capital del pais " << j+1 << " :" <<  endl;
			cin.getline(capitol[j].capital,50);
			cout << "Ingrese la poblacion del pais " << j+1 << " :" << endl;
			cin >> habitants[j].habitantes;
			suma += habitants[j].habitantes;
		}
		cout << "La suma de la población del continente " << nombre[i].continent << " es: " << suma << endl;
		
	}
	return 0;
}
