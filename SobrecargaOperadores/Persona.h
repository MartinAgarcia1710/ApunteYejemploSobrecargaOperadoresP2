#pragma once

	class Persona
	{
		public:
			Persona(const char* nombre, const char* apellido, int edad);
			void setNombre(const char* nombre);
			void setApellido(const char* apellido);
			void setEdad(int edad);
			void setSueldo(float sueldo);
			void mostrarDatos();
			
			const char* getNombre();
			const char* getApellido();
			int getEdad();
			float getSueldo();

			bool operator==(const Persona p2);
			bool operator<(const Persona p2);
			int operator+(const Persona p2);
			void operator=(const Persona p2);

		private:
			char _nombre[50];
			char _apellido[50];
			int _edad;
			float _sueldo;
	};

