#include <iostream>
#include <string.h>

using namespace std;

struct CD
{
    char titulo[25];
    char artista[25];
    int numeroDeCaciones;
    double precio;
    int anioDeLanzamiento;
};

void mostrarLongitudArtista(CD a)
{
    int longitud = strlen(a.artista);
    if (longitud > 10)
    {
        cout << "La longitud del artista es: " << longitud << endl;
    }
}

bool compararArtistaCD(CD a, CD b)
{
    return strcmp(a.artista, b.artista) == 0;
}

int main(int argc, char const *argv[])
{
    CD disco1 = {"Nombre1", "Artista1", 8, 100, 2000};
    CD disco2 = {"Nombre2", "ArtistaConNombreLargo2", 9, 150, 2001};
    CD disco3 = {"Nombre3", "Artista1", 10, 200, 2002};

    mostrarLongitudArtista(disco1);
    mostrarLongitudArtista(disco2);
    mostrarLongitudArtista(disco3);

    if (compararArtistaCD(disco1, disco3))
    {
        cout << "Son del mismo artista" << endl;
    }
    else
    {
        cout << "NO son del mismo artista" << endl;
    }

    if (compararArtistaCD(disco2, disco3))
    {
        cout << "Son del mismo artista" << endl;
    }
    else
    {
        cout << "NO son del mismo artista" << endl;
    }
}
