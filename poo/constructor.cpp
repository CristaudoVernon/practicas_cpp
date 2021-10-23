#include <iostream>
#include <cmath>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    int paginas;
    int isbn;
    Libro(string cTitulo, string cAutor, int cPaginas, int cIsbn){ //"c" es por "constructor", por eso la letra al principio de cada parametro
        titulo = cTitulo;
        autor = cAutor;
        paginas = cPaginas;
        isbn = cIsbn;
    }
    void datosLibro(){
        cout << "Nombre libro -- " << titulo << endl;
        cout << "Autor -- " << autor << endl;
        cout << "Paginas -- " << paginas << endl;
        cout << "ISBN --" << isbn << endl;
        cout << " " << endl;
    }
};

int main()
{
    Libro libro1("Metro 2033", "Dmitri Glujovski", 348, 9780575086258);
    libro1.datosLibro();

    Libro libro2("Portal o la ciencia del videojuego", "Eva Cid", 256, 9788494534911);
    libro2.datosLibro();


    return 0;
}
