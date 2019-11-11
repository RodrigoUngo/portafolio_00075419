#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int a, b, c, d;
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	//Pila intacta
	a = s.top();
	s.pop();
	b = s.top();
	s.pop();
	c = s.top();
	s.pop();
	d = s.top();
	
	cout << "El elemento del fondo es: " << d << endl;
	
	s.push(c);
	s.push(b);
	s.push(a);
	
	if (s.empty())
		cout << "La pila esta vacia\n";
	else
		cout << "La pila no esta vacia\n";
	
	//Pila vacia
	a = s.top();
	s.pop();
	b = s.top();
	s.pop();
	c = s.top();
	s.pop();
	d = s.top();
	s.pop();
	
	cout << "El elemento del fondo es: " << d << endl;
	
	if (s.empty())
		cout << "La pila esta vacia\n";
	else
		cout << "La pila no esta vacia\n";

	return 0;
}
