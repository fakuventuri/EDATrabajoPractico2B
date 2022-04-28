#include <iostream>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Persona
{
    string nombre;
    int edad;
    int peso;
    Fecha fecha;
};

struct Trabajador
{
    Persona persona;
    int salario;
};

int main(int argc, char const *argv[])
{
    Persona persona1 = {"Juan", 26, 70, {8, 2, 1996}};

    Fecha fecha1 = {10, 5, 1992};
    Persona persona2 = {"Pedro", 30, 80, fecha1};

    Trabajador trabajador1 = {{"Agustin", 21, 85, {20, 11, 2000}}, 50000};

    Trabajador trabajador2 = {persona2, 100000};
}
