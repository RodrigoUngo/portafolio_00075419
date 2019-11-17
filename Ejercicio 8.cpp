#include <iostream>
#include <vector>
using namespace std;

vector<int> lista;

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        cout << lista[i] << endl;
}

int main(void)
{
	int num, cifra;
	cout << "Ingrese un entero en base 10" << endl;
	cin >> num;
	while(num =! 0){
        cifra = num%2;
        lista.push_back(cifra);
        num = num/2;
    }
    mostrarLista();
    return 0;
}
