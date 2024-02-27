#pragma once
#include <iostream>
#include <string>
#include "Animal.cpp"
#include "Perro.h"
using namespace std;
class Gato : public Animal{
public:
  Gato(string nombre, int edad) : Animal(nombre, edad) {}

  void hablar() override { cout << "Miau!" << endl; }
};


int main() {
	Perro perro("Toby", 5);
	Gato gato("Misha", 3);

	// Polimorfismo: Se llama al m�todo hablar() de cada objeto
	// seg�n su tipo espec�fico.
	perro.hablar();
	gato.hablar();

	return (0);
}

