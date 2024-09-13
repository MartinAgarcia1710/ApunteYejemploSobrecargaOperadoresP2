#include <iostream>
#include "Persona.h"
#include <string>

Persona::Persona(const char* nombre, const char* apellido, int edad)
{
	setNombre(nombre);
	setApellido(apellido);
	setEdad(edad);
	
}
void Persona::setNombre(const char* nombre)
{
	strcpy_s(this->_nombre, nombre);
}

void Persona::setApellido(const char* apellido)
{
	strcpy_s(this->_apellido, apellido);
}

void Persona::setEdad(int edad)
{
	if (edad > 0)
	{
		this->_edad = edad;
	}
	else
	{
		this->_edad = 1;
	}
}

void Persona::setSueldo(float sueldo)
{
	if (sueldo > 0) 
	{
		this->_sueldo = sueldo;
	}
	else
	{
		this->_sueldo = 1;
	}
}

float Persona::getSueldo() {
	return this->_sueldo;
}

void Persona::mostrarDatos()
{
	std::cout << "Nombre: " << this->_nombre << "\n";
	std::cout << "Apellido: " << this->_apellido << "\n";
	std::cout << "Edad: " << this->_edad << "\n";
}

const char* Persona::getNombre()
{
	return this->_nombre;
}

const char* Persona::getApellido()
{
	return this->_apellido;
}

int Persona::getEdad()
{
	return this->_edad;
}

bool Persona::operator==(const Persona p2)
{
	 if (this->_edad == p2._edad) {
		return true;
	}
	else 
	{
		return false;
	}
	
	return this->_edad == p2._edad;
}

bool Persona::operator<(const Persona p2)
{
	/* if (strcmp(this->_nombre, p2._nombre) < 0) {
		return true;
	}
	else {
		return false;
	}
	*/

	//Alternativa para ahorrar código
	return strcmp(this->_nombre, p2._nombre) < 0;
}

int Persona::operator+(const Persona p2)
{
	return this->_edad + p2._edad;
}

void Persona::operator=(const Persona p2)
{
	this->_edad = p2._edad;
}
