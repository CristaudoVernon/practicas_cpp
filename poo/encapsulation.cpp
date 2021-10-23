#include <iostream>
#include <cmath>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anio;
    string clasif;
public:
    void setTitulo(string cTitulo){ //setter
        titulo = cTitulo;
    }
    string getTitulo(){ //getter
        return titulo;
    }
    void setDirector(string cDirector){
        director = cDirector;
    }
    string getDirector(){
        return director;
    }
    void setAnio(int cAnio){
        anio = cAnio;
    }
    int getAnio(){
        return anio;
    }
    void setClasif(string cClasif){
        if (cClasif == "ATP" || cClasif == "+13" || cClasif == "+16" || cClasif == "+18"){ //condicionamos la clasificacion para que no sea cualquier cosa
            clasif = cClasif;
        }else{
            clasif = "INGRESE UNA CALIFICACION CORRECTA";
        }
    }
    string getClasif(){
        return clasif;
    }
    Pelicula(string cTitulo, string cDirector, int cAnio, string cClasif){ //"c" es por "constructor", por eso la letra al principio de cada parametro
        titulo = cTitulo;
        director = cDirector;
        anio = cAnio;
        clasif = cClasif;
    }
    void datosPelicula(){
        cout << "Nombre pelicula -- " << titulo << endl;
        cout << "Director -- " << director << endl;
        cout << "Anio -- " << anio << endl;
        cout << "Clasificacion -- " << clasif << endl;
        cout << " " << endl;
    }
};

int main()
{
    Pelicula bladerunner("Blade Runner 2049", "Denis Villeneuve", 2017, "+16");
    bladerunner.datosPelicula();

    Pelicula spiderman3("Spiderman 3", "Sam Reimi", 2007, "+13");
    spiderman3.datosPelicula();

    bladerunner.setClasif("+18");

    cout << bladerunner.getTitulo() << " tiene una calificacion por edades de: " << bladerunner.getClasif() << endl;

    return 0;
}
