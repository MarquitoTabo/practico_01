#pragma once
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	class Gato : public Animal {
	public:
		Gato(string nombre, int edad) : Animal(nombre, edad) {}

		void hablar() override { cout << "Miau!" << endl; }
	};

}
