//Roberto Carlos Cruz Espinoza 00210619
//Rodrigo Antonio Ungo Muñoz 00075419

#include <iostream>
using namespace std;

int a[]={1,3,4,5,17,18,31,33};
int low=0, high=7, mid=0, i=0, x=0;
int buscador(int x, int low, int high){
	if(low>high)
		return -1;
	mid = (low+high) / 2;
	if(x==a[mid])
		return(mid);
	if(x<a[mid])
		buscador(x, low, mid-1);
	else
		buscador(x, mid+1, high);
}

int main(void)
{
	cout << "Ingrese un entero: ";
	cin >> x;
		i = buscador(x, low, high);
		if(i==-1)
			cout << "El elemento no se encontro";
		else
			cout << "El elemento se encuentra en la casilla " << i+1;
	return 0;
}
