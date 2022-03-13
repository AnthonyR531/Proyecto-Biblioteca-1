#include"biblioteca.h"
#include <iostream>

int suma(int a, int b){
	return a+b;
}
int resta(int a, int b){
	if (a>=b)
	return a-b;
	else
	return b-a;
}
int multiplicacion(int a, int b){
	return a*b;
}
int division(int a, int b){
	if (a>=b)
	return a/b;
	else
	return b/a;	
}
