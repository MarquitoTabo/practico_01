#pragma once
#include"Animal.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	class Perro : public Animal
	{
	public:
		Perro(string nombre, int edad) : Animal(nombre, edad) {}

		void hablar() override { cout << "Woof!" << endl; }
	};
}

