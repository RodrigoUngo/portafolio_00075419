#include <iostream>

using namespace std;

void mcd(int mayor, int menor){
    if(mayor%menor == 0)
        cout << "EL mcd de los numeros es: " << menor << endl; 
    else{
        int aux = menor;
        int residuo = mayor%menor;
        mcd(aux, residuo);
    }
}

int main(void)
{
    int a, b;
    cout << "Ingrese dos enteros (mayor y menor): " << endl;
    cin >> a;
    cin >> b;
    mcd(a,b);

    return 0;
}
