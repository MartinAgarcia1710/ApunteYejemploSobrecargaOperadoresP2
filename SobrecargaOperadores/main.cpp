#include <iostream>
#include "Persona.h"

std::ostream& operator<<(std::ostream& os, Persona p);



std::ostream& operator<<(std::ostream& os, Persona p)
{
	os << p.getNombre();
	return os;
}


	int main() {
		Persona lalo("Lalo", "Landa", 10);
		Persona nick("Nick", "Riviera", 45);
		Persona bart("Bart", "Simpson", 10);
		Persona rafa("Rafa", "Gorgory", 8);
		lalo.setSueldo(10000);
		nick.setSueldo(15000);
	
		std::cout << "Sobre carga de operadores de comparacion (== y <)\n";
		if (lalo == nick) {
			std::cout << "Tienen la misma edad";
		}
		else {
			std::cout << "Tienen distinta edad";
		}

		std::cout << "\n";

		if (lalo < bart) {
			std::cout << "Lalo va primero en la lista";
		}
		else {
			std::cout << "Bart va primero en la lista";
		}
	
		std::cout << "\n\n";
	
		std::cout << "Sobre carga operadores aritmeticos (+)\n";
		int suma = bart + lalo;
		std::cout << "Si sumo las edades de Bart y Lalo obtengo: " << suma << "\n";

		std::cout << "Sobre carga de operadores de asignacion (=)\n";
		lalo = nick;
		std::cout << "Ahora la edad de Lalo es " << lalo.getEdad() << " al igual que " << nick.getNombre() << "\n\n";

		std::cout << "Sobrecarga operador << para mostrar el nombre de la persona\n";
		std::cout << lalo;
		
		return 0;
	}