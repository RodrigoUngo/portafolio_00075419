#include <iostream>
using namespace std;


float mediana(int a[], int m){
	float resultado;
	if(m%2 != 0){
		resultado = a[(m)/2];
		cout << "La mediana del arreglo es: " << resultado;
	}
	else{
		resultado = (a[m/2]+a[(m/2)+1])/2;
		cout << "La mediana del arreglo es: " << resultado;
	}
}

int main()
{
	int n;
	int numeros[n];
	cout << "Ingrese el tamanio del arreglo: "; cin >> n;
	for(int i=0;i<n;i++){
		cout << "Ingrese el numero " << i+1 << " ";
		cin >> numeros[i];
	}
	
	mediana(numeros, n);
}
