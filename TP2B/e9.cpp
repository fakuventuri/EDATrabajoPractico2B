#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

struct Atleta
{
    string nombre;
    string pais;
    int numMedallas;
};

Atleta crearAtleta()
{
    string nombre;
    string pais;
    int numMedallas;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese el pais: ";
    getline(cin, pais);

    cout << "Ingrese el numero de medallas: ";
    cin >> numMedallas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << endl;

    Atleta atleta = {nombre, pais, numMedallas};

    return atleta;
}

void mostrarAtleta(Atleta a)
{
    cout << "Atleta: " << a.nombre << endl;
    cout << "Pais: " << a.pais << endl;
    cout << "Numero de medallas: " << a.numMedallas << endl;
}

Atleta tieneMasMedallas(vector<Atleta> atl)
{
    Atleta masMedayas = atl[0];

    for (Atleta a : atl)
    {
        if (a.numMedallas > masMedayas.numMedallas)
        {
            masMedayas = a;
        }
    }

    return masMedayas;
}

int main(int argc, char const *argv[])
{
    int cantidadAtletas;

    cout << "Cuantos atletas desea ingresar? ";
    cin >> cantidadAtletas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<Atleta> atletas;

    for (int i = 0; i < cantidadAtletas; i++)
    {
        cout << endl
             << "Atleta " << i + 1 << endl;
        atletas.push_back(crearAtleta());
        Atleta mma = tieneMasMedallas(atletas);

        cout << "El que tiene mas medayas ahora es: " << mma.nombre << " de " << mma.pais << endl;
    }

    cout << endl
         << "Atleta con mas medallas: " << endl;
    mostrarAtleta(tieneMasMedallas(atletas));
}
