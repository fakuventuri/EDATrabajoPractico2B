#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

struct Empleado
{
    string nombre;
    int edad;
    double salario;
};

Empleado crearEmpleado()
{
    string nombre;
    int edad;
    double salario;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el salario: ";
    cin >> salario;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << endl;

    Empleado empleado = {nombre, edad, salario};

    return empleado;
}

void mostrarEmpleado(Empleado a)
{
    cout << "Alumno: " << a.nombre << endl;
    cout << "Edad: " << a.edad << endl;
    cout << "Salario: " << a.salario << endl;
}

int main(int argc, char const *argv[])
{
    int cantidadEmpleados;

    cout << "Cuantos empleados desea ingresar? ";
    cin >> cantidadEmpleados;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<Empleado> empleados;

    for (int i = 0; i < cantidadEmpleados; i++)
    {
        cout << endl
             << "Empleado " << i + 1 << endl;
        empleados.push_back(crearEmpleado());
    }

    Empleado mayorSalario = empleados[0];
    Empleado menorSalario = empleados[0];

    for (Empleado e : empleados)
    {
        if (e.salario > mayorSalario.salario)
        {
            mayorSalario = e;
        }

        if (e.salario < menorSalario.salario)
        {
            menorSalario = e;
        }
    }

    cout << "Empleado con mayor salario: " << endl;
    mostrarEmpleado(mayorSalario);

    cout << endl
         << "Empleado con menor salario: " << endl;
    mostrarEmpleado(menorSalario);
}
