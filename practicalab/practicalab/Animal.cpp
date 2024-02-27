#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    virtual void hablar() = 0; // Método virtual puro

    string getNombre() { return nombre; }
    int getEdad() { return edad; }
};