/*calcular operaciones matematicas*/
#include <iostream>         //libreria
#include <string>           //libreria
#include <conio.h>          //libreria para usar el getch
using namespace std;
int main()                  //inicio del programa

{
	int num1;               //int para definir variables como enteros
	int num2;
	int sum;

	system("color 3e");          //cambiar de color al fondo
	system("title CALCULADORA: SUMA");        //title(titulo), para poner titulo en la barra superior

	cout << "\t\t\t\t\t------------------------------------"<<endl;
	cout << "\t\t\t\t\tBIENVENIDOS A LA CALCULADORA ANTRAK"<<endl;
	cout << "\t\t\t\t\t------------------------------------"<<endl;
	cout << "INGRESE EL PRIMER NUMERO: ";          //cout para escribir 
	cin >> num1;                                   //cin para leer
	system("cls");
	cout << "INGRESE EL SEGUNDO NUMERO:";
	cin >> num2;

	system("cls");                 //cls es clear screen(limpiar pantalla) para separar una parte de la otra

	system("color 20");         //si se escribe solo un numero o letra, solo cambia las letras; si se escriben dos, el primer numero o letra es el fondo y el segundo las letras 
	system("title CALCULADORA: RESULTADO");         //el titulo de la barra superior se puede ir cambiando
	sum = num1 + num2;
	cout << "EL RESULTADO DE LA SUMA ES:"<<sum<<endl;

	cout << "OPERACION FINALIZADA" << endl;
	cout << "PRESIONE CUALQUIER TECLA PARA CONTINUAR";
	_getch();                    //para una pausa hasta que se pulse alguna tecla para continuar

	system("cls");
	system("color e0");
	cout << "SOTO PUTO";

	cout << endl << endl;
	system("pause");          //pausar el programa
	return 0;                 //finalizar el programa
}