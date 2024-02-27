#include <iostream>
using namespace std;
class Cuadrado      //clase
{
    public:                 //indentificador de la clase(publica,privada...)
       
        float base;         //atributos del objeto
        float altura;

        Cuadrado(float b, float a)      //metodo constructor(debe ser de clase publica)
        {
            this->altura = a;
            this->base = b;

        }
        float CalcularArea()                //funcion(lo que va a realizar)
        {
            return this->base * this->altura;
        }
};

int main()
{
    float b, a;      //definir variables ingresadas por el usuario
    cout << " ingrese la base del cuadrado" << endl;
    cin >> b;
    cout << "ingrese la altura del cuadrado" << endl;
    cin >> a;

    Cuadrado cuadrado1 = Cuadrado(b, a);       //la clase y el metodo deben tener el mismo nombre, creamos el objeto(cuadrado1)y le dimos valores(b,a)
    cout << "El area es igual a: "<< cuadrado1.CalcularArea() << endl;
    system("pause");



}
