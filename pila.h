#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;

class Pila{
	int *pila;
	int p;
	public:
	Pila(int max=100){
		pila = new int[max]; 
		p=0;
	}
	~Pila(){
		delete pila;
	}
	inline void meter (int v){
		pila[p++]=v;
	}
	inline int sacar(){
		return pila [--p];
	}
	inline int vacia(){
		return !p;
	} 
};
/*
char c; 
Pila guardar(50);
while(cin.get(c)){
	while(c>='0' && c<='9'){
		cout.put(c); cin.get(c);
	}
  if (c==')') cout.put(guardar.sacar());
  if (c=='+') guardar.meter(c);
  if (c=='*') guardar.meter(c);
  if (c!='(') cout << ' ';
}
cout<< '\n';

char c; 
Pila acc(50); 
int x;

while(cin.get(c)){
	x=0;
	while (c==' '){
		cin.get(c);
	}
 	while(c>= '0' && c<='9'){
		x=10*x + (c-'0'); 
		cin.get(c);
	}
	if (c == '+') x= acc.sacar() + acc.sacar();
	if (c== '*') x= acc.sacar() * acc.sacar();
	acc.meter(x);
}
cout << acc.sacar()<< '\n';
*/


#endif
