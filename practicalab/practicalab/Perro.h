#pragma once
#include <iostream>
#include <string>
using namespace std;
class Perro : public Animal 
{
public:
	Perro(string nombre, int edad) : Animal(nombre, edad) {}

	void hablar() override { cout << "Woof!" << endl; }
};

