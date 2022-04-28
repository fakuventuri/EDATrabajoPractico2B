#include <iostream>

using namespace std;

struct infoDireccion
{
    string calle;
    string ciudad;
    string provincia;
};

struct Empleado
{
    string nombre;
    infoDireccion direccion;
    int salario;
};

Empleado arreglo[2];

int main(int argc, char const *argv[])
{
    arreglo[0] = {"Juan", {"Calle1", "Ciudad1", "Provincia1"}, 1000};
    arreglo[1] = {"Pedro", {"Calle2", "Ciudad2", "Provincia2"}, 4000};

    cout << arreglo[0].nombre << " de: " << arreglo[0].direccion.provincia << endl;
    cout << arreglo[1].nombre << " vive en calle: " << arreglo[1].direccion.calle;
}
