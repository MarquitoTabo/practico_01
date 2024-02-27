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

        virtual void hablar() = 0; // M�todo virtual puro

        string getNombre() { return nombre; }
        int getEdad() { return edad; }

    };
    int main() {
        Perro perro("Toby", 5);
        Gato gato("Misha", 3);

        // Polimorfismo: Se llama al m�todo hablar() de cada objeto
        // seg�n su tipo espec�fico.
        perro.hablar();
        gato.hablar();

        return�0;
    }
   
}

