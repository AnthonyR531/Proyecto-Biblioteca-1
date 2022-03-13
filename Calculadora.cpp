#include <iostream>
#include <cstdlib>
#include"biblioteca.h"

 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
using namespace std;

int main(int argc, char** argv) {
	
	 int opcion, a, b;
	 
	 while( opcion != 5){
	 
	 
	 cout << " ------MENU-----" << endl;
	 cout << "1.Suma" <<endl;
	 cout << "2.Resta" <<endl;
	 cout << "3.Multiplicacion" <<endl;
	 cout << "4.Division" <<endl;
	 cout << "5.Salir" <<endl;
	 cout << "Ingrese el numero de la operacion a realizar: ";
	 cin >> opcion;
	 
	 switch(opcion){
	 	
	 case 1:
	 cout << "Ingrese el primer numero: " <<endl;
	 cin >> a;
	 cout << "Ingrese el segundo numero: " <<endl;
	 cin >> b;
	 cout << "La suma es: " <<suma(a,b)<<endl;
	 system("pause");
	 system("cls");
	 break;
	 case 2:
	 cout << "Ingrese el primer numero: " <<endl;
	 cin >> a;
	 cout << "Ingrese el segundo numero: " <<endl;
	 cin >> b;
	 cout << "La resta es: " <<resta(a,b)<<endl;
	 system("pause");
	 system("cls");
	 break;
	 case 3:
	 cout << "Ingrese el primer numero: " <<endl;
	 cin >> a;
	 cout << "Ingrese el segundo numero: " <<endl;
	 cin >> b;
	 cout << "La multiplicacion es: " <<multiplicacion(a,b)<<endl;
	 system("pause");
	 system("cls");
	 break;
	 case 4:
	 cout << "Ingrese el primer numero: " <<endl;
	 cin >> a;
	 cout << "Ingrese el segundo numero: " <<endl;
	 cin >> b;
	 cout << "La division es: " <<division(a,b)<<endl;
	 system("pause");
	 system("cls");
	 break;
	 case 5:
	 	cout <<"El programa fue cerrado exitosamente...";
	 default:
	 	if(opcion< 1 || opcion >5){
	 		cout << "El numero que ingreso, no corresponde..."<<endl;
	 		system("pause");
	 		system("cls");
	 	}
	 break;
	 
}
}
}
