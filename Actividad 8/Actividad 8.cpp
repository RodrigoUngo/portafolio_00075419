#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

float obtenerultimo(Pila *s){
	if(empty(s))
		return -1;
	float a = 0, b = 0, c =0, d=0;
	pop(s, &a);
	pop(s, &b);
	pop(s, &c);
	pop(s, &d);
	push(s, d);
	push(s, c);
	push(s, b);
	push(s, a);
	return d;
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	push(&unaPila, 1.2);
	push(&unaPila, 3.4);
	push(&unaPila, 5.6);
	push(&unaPila, 7.8);
	
	float ultimo = obtenerultimo(&unaPila);
	cout << "ultimo: " << ultimo << endl;
}
