#include <iostream>
#include <cmath>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    int paginas;
    int isbn;
};

int main()
{
    Libro libro1;
    libro1.titulo = "Metro 2033";
    libro1.autor = "Dmitri Glujovski";
    libro1.paginas = 348;
    libro1.isbn = 9780575086258;


    Libro libro2;
    libro2.titulo = "Portal o la ciencia del videojuego";
    libro2.autor = "Eva Cid";
    libro2.paginas = 256;
    libro2.isbn = 9788494534911;

    cout << libro2.autor;

    return 0;
}
