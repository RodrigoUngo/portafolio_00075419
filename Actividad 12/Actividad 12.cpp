#include <iostream>
#include <vector>
using namespace std;

struct TPupusas{
    int revueltas;
    int frijolConQueso;
    int queso;
    bool arroz;
};
typedef struct TPupusas Pupusas;

Pupusas maizOarroz(){
	Pupusas p;
	int masa = 0;
	cout << "\t1) Arroz\n\t2) Maiz"
		<< "\n\tOpcion elegida: ";
	cin >> masa;
	switch(masa){
    	case 1: p.arroz = true;
    		break;
    	case 2: p.arroz = false;
    		break;
    	default: cout << "Opcion erronea!" << endl;
            break;
	}
}

Pupusas solicitarPupusas(){
    Pupusas p;
    int pupas = 0;
    cout << "\t1) Revueltas\n\t2) Frijol con queso\n\t3) Queso"
		<< "\n\tOpcion elegida: ";
    cin >> pupas;
    switch(pupas){
    	case 1: cout << "Cuantas pupusas quiere?";
			cin >> p.revueltas;
    		break;
    	case 2: cout << "Cuantas pupusas quiere?";
			cin >> p.frijolConQueso;
    		break;
    	case 3: cout << "Cuantas pupusas quiere?";
			cin >> p.queso;
    		break;
    	default: cout << "Opcion erronea!" << endl;
            break;
	}
	maizOarroz();
	
    return p;
}

void mostrarPupusas(Pupusas p){
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Frijol con queso: " << p.frijolConQueso << endl;
    cout << "Queso: " << p.queso << endl;
    cout << endl;
}

vector<Pupusas> lista;

void agregarPupusas(){
    Pupusas p = solicitarPupusas();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarPupusas(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Pupusas\n\t2) Ver orden"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPupusas();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
