#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Alumno
{
    string nombre;
    int edad;
    double promedio;
};

Alumno crearAlumno()
{
    string nombre;
    int edad;
    double promedio;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el promedio: ";
    cin >> promedio;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << endl;

    Alumno alumno = {nombre, edad, promedio};

    return alumno;
}

void mostrarAlumno(Alumno a)
{
    cout << "Alumno: " << a.nombre << endl;
    cout << "Edad: " << a.edad << endl;
    cout << "Promedio: " << a.promedio << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Datos alumno 1:" << endl;

    Alumno alumno1 = crearAlumno();

    cout << "Datos alumno 2:" << endl;

    Alumno alumno2 = crearAlumno();

    cout << "Datos alumno 3:" << endl;

    Alumno alumno3 = crearAlumno();

    Alumno mayorPromedio = alumno1;

    Alumno alumnos[2] = {alumno2, alumno3};

    for (Alumno al : alumnos)
    {
        if (al.promedio > mayorPromedio.promedio)
        {
            mayorPromedio = al;
        }
    }

    cout << "Alumno con mayor promedio: " << endl;
    mostrarAlumno(mayorPromedio);
}
