#include <iostream>
#include <cmath>

using namespace std;

string color(int col){ //la funcion de tipo string se llama color() tiene como parametro un tipo int de nombre col
    string colfull; //creamos la variable de tipo string de nombre colorful sin ningun valor asociado

    switch(col){ //el parametro col al ser definido como int va a recibir un numero (que vienen a ser los case 1,2,3,etc)
    case 1:
        colfull = "Rojo"; //al caso 1 le asignamos al string colfull (que estaba vacio) el valor rojo, y asi con los demas casos...
        break;
    case 2:
        colfull = "Amarillo";
        break;
    case 3:
        colfull = "Verde";
        break;
    default:
        colfull = "Numero incorrecto"; //en el caso que pongamos un numero que no este como case (por ej: 4, 5, 6, etc) el switch va a pasar por el default.
    }
    return colfull; //por ultimo tenemos que retornar ese color que seleccionamos
}


int main()
{
    cout << color(3) << endl; //y aca llamamos a color que al ser de tipo string va a retornar un color en palabra, pero como su parametro es de tipo integer, es el color/case que queremos seleccionar

    return 0;
}
