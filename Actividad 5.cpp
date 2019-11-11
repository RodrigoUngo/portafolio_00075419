// Rodrigo Antonio Ungo Muñoz 00075419 Sección 03
//Roberto Carlos Cruz Espinoza 00210619 Sección 03

#include <iostream>
using namespace std;

int mult(int a, int b){
	if(b==1){
		cout << "b=" << b << " caso base" 
			<< endl;
		return a;
	}else{
		int x = b-1;
		int y = mult(a,b-1);
		cout << "a=" << x << " x=" << b-1 
			<< " y=" << y << endl;
		return a + y;
	}
}

int main()
{
	cout << "\nMultipicacion de 4 por 5\n";
	int m = mult(4,2);
	cout << "Resultado: " << m << endl;
}
