#pragma once
#include <iostream>
#include <string>
#include <Perro.h>
#include<Gato.h>

using namespace std;
int main()
{
    class Animal
    {
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
    int main() {
        Perro perro("Toby", 5);
        Gato gato("Misha", 3);

        // Polimorfismo: Se llama al método hablar() de cada objeto
        // según su tipo específico.
        perro.hablar();
        gato.hablar();

        return 0;
    }
   
}

