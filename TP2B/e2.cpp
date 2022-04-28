#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct profesor
{
    string nombre;
    string cargo;
    string materia;
    int cargaHoraria;
};

profesor crearProfesor()
{
    string nombre;
    string cargo;
    string materia;
    int cargaHoraria;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    cout << "Ingrese el cargo: ";
    getline(cin, cargo);
    cout << "Ingrese la materia: ";
    getline(cin, materia);
    cout << "Ingrese la carga horaria: ";
    cin >> cargaHoraria;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << endl;

    profesor profe = {nombre, cargo, materia, cargaHoraria};
    return profe;
}

int main(int argc, char const *argv[])
{
    profesor profe1 = crearProfesor();
    profesor profe2 = crearProfesor();

    cout << profe1.cargo << ": " << profe1.nombre << " de " << profe1.materia << " con carga horaria: " << profe1.cargaHoraria << endl;
    cout << profe2.cargo << ": " << profe2.nombre << " de " << profe2.materia << " con carga horaria: " << profe2.cargaHoraria;
}
