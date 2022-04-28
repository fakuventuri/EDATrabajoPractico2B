#include <iostream>

using namespace std;

enum Color
{
    rojo,
    verde,
    azul
};

struct Libro
{
    string titulo;
    string autor;
    int anio;
    Color color;
};

int main(int argc, char const *argv[])
{
    Libro libro1 = {"titulo1", "autor1", 2010, rojo};
    Libro libro2 = {"titulo2", "autor2", 2011, verde};
    Libro libro3 = {"titulo3", "autor3", 2012, azul};
}
