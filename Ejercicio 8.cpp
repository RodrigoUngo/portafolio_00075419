#include <iostream>
using namespace std;

void conteo1(int n){
	if(n==1)
		cout << n << endl;
	else{
		conteo1(n-1);
		cout << n << endl;
	}
}

void conteo2(int n){
	if(n==1){
		cout << n << endl;
	}else{
		cout << n-1 << endl;		
		conteo2(n-1);
	}
}

int main(void)
{
	int a;
	cout << "Ingrese un entero: ";
	cin >> a;
	conteo1(a);
	conteo2(a);
    return 0;
}
