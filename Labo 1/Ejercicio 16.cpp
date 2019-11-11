#include <iostream>

using namespace std;

int main(void)
{
    int a[10];
    int suma=0;
    float promedio=0;
    for(int i=0;i<10;i++){
        cout << "Ingrese un entero: ";
        cin >> a[i];
        suma+=a[i];
    }
    promedio=suma/10;
    cout<<"La suma de los numeros es: "<<suma<<" y el promedio es: "<<promedio<<endl;
    return 0;
}
