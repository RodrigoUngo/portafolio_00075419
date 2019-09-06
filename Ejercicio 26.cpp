#include <iostream>

using namespace std;

struct complejo{
    int real;
    int imaginario;
};
complejo numero(complejo numero){
    complejo conjugad;
    conjugad.real = numero.real;
    conjugad.imaginario = numero.imaginario * -1;
    cout << "La conjugada del numero complejo es: " << conjugad.real << " + " << conjugad.imaginario << "j" << endl;
}


int main(void)
{
    complejo numero1;
    
    cout<<"Ingrese la parte real del numero complejo: ";
    cin >> numero1.real;
    cout<<"Ingrese la parte imaginaria del numero complejo: ";
    cin >> numero1.imaginario;
    
    cout << "El numero complejo es: " << numero1.real << " + " << numero1.imaginario << "j" << endl;
    numero(numero1);
    
    return 0;
}
