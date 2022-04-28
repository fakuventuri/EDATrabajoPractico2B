#include <iostream>
#include <string>
#include <limits>
#include <cstring>

using namespace std;

struct Corredor
{
    string nombre;
    int edad;
    char sexo;
    string club;
    char categoriaCompeticion[20];
};

int main(int argc, char const *argv[])
{
    string nombre;
    int edad;
    char sexo;
    string club;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el sexo como M o F: ";
    cin >> sexo;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el club: ";
    getline(cin, club);
    cout << endl;

    Corredor corredor1 = {nombre, edad, sexo, club};

    if (corredor1.edad <= 18)
    {
        strcpy(corredor1.categoriaCompeticion, "Juvenil");
    }
    else if (corredor1.edad <= 40)
    {
        strcpy(corredor1.categoriaCompeticion, "Senior");
    }
    else
    {
        strcpy(corredor1.categoriaCompeticion, "Veterano");
    }

    cout << "Corredor " << corredor1.nombre << endl;
    cout << "Edad: " << corredor1.edad << endl;
    cout << "Sexo: " << corredor1.sexo << endl;
    cout << "Club: " << corredor1.club << endl;
    cout << "Categoria de competicion: " << corredor1.categoriaCompeticion << endl;
}
