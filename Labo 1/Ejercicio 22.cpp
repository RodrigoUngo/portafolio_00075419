#include <iostream>
using namespace std;

int main(void)
{
	int a[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	cout << "Ingrese un entero: ";
	cin >> a[0][0];
	cout << "Ingrese un entero: ";
	cin >> a[0][1];
	cout << "Ingrese un entero: ";
	cin >> a[1][0];
	cout << "Ingrese un entero: ";
	cin >> a[1][0];
	cout << "Ingrese un entero: ";
	cin >> a[1][2];
	cout << "Ingrese un entero: ";
	cin >> a[2][1];
	cout << "Ingrese un entero: ";
	cin >> a[2][2];
	cout << "Ingrese un entero: ";
	cin >> a[2][3];
	cout << "Ingrese un entero: ";
	cin >> a[3][2];
	cout << "Ingrese un entero: ";
	cin >> a[3][3];
	cout << "Ingrese un entero: ";
	cin >> a[3][4];
	cout << "Ingrese un entero: ";
	cin >> a[4][3];
	cout << "Ingrese un entero: ";
	cin >> a[4][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			cout << a[i][j];
	cout << " " << endl;
	}
    return 0;
}
