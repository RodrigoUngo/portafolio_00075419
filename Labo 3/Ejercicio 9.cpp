#include <iostream>
#include <string>
using namespace std;

struct TDatos{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int telefono;
    string correo;
};
typedef struct TDatos Datos;

Datos solicitarDatos(){
    Datos p;
    cout << "Numero de carnet: "; cin >> p.carnet;
    cin.ignore();
    cout << "Nombres: "; getline(cin, p.nombre);
    cout << "Apellidos: "; getline(cin, p.apellido);
    cout << "Edad: "; cin >> p.edad;
    cout << "Numero de telefono: "; cin >> p.telefono;
    cin.ignore();
    cout << "Correo electronico: "; getline(cin, p.correo);
    
    return p;
}

void mostrarDatos(Datos p){
    cout << "Numero de carnet: " << p.carnet << endl;
    cout << "Nombres: " << p.nombre << endl;
    cout << "Apellidos: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Numero de telefono: " << p.telefono << endl;
    cout << "Correo electronico: " << p.correo << endl;
    cout << endl;
}

struct TNodo{
    Datos dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Datos p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Datos p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(Datos p) {
    int unCarnet = 0;
    cout << "Carnet de referencia: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio;
    
    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    if(s == NULL){
        cout << "Carnet de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;
    
    s->sig = nuevo;
    cout << "Persona ingreasada con exito" << endl;
}

void insertarAntesDe(Datos p) {
    int unCarnet = 0;
    cout << "Carnet de referencia: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio, *q = NULL;
    
    while(s != NULL && (s->dato).carnet != unCarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "Carnet de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
    
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Persona ingresada con exito" << endl;
}

void agregarDatos(){
    Datos p = solicitarDatos();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarDatos(s->dato);
        s = s->sig;
    }
}

void eliminarDatos(){
    int unCarnet = 0;
    cout << "Carnet de libro a eliminar: ";
    cin >> unCarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Persona a eliminar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona eliminada!" << endl;
}

bool buscarPersona() {
    int unCarnet = 0;
    cout << "Carnet de persona a buscar: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    
    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Ver Lista"
            << "\n\t3) Eliminar persona\n\t4) Buscar persona"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarDatos();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                eliminarDatos();
            break;
            case 4: cout << "Buscando..." << endl;
                if(buscarPersona())
                    cout << "La persona SI se encuentra" << endl;
                else
                    cout << "La persona NO se encuentra" << endl;
                //cout << "El libro " << (buscarLibro() ? "SI" : "NO") << " se encuentra" << endl;
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
