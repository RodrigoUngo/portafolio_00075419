#include <iostream>
using namespace std;

int pos = 0;

void agregarNumero(int a[]){
	if(pos != 15){
		cin >> a[pos];
		pos++;
	}
	else{
		pos = 0;
		cin >> a[0];
	}
}

void mostrarLista(int b[]){
	for(int i=0;i<15;i++)
		cout << b[i] << endl;
}

int main(void)
{
	int arreglo[15];
	bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver Numeros"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarNumero(arreglo);
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista(arreglo);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    return 0;
}
