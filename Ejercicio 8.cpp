#include <iostream>

using namespace std;

void cifras(int numero){
    int contador = 0;
    if(numero%10 == numero)
        cout << "El numero de cifras del numero es: " << contador << endl;
    else{
        contador++;
        cifras(numero/10);
      }
}

int main(void)
{
    int x = 0;
    cout << "Ingrese un numero: ";
    cin >> x;
    cifras(x);
    return 0;
}
