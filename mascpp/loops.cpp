#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*for(int i = 0; i < 50; i++){
            cout << i << endl;
    }*/

    cout << "Ingresa un numero para probar for con interaccion de usuario: ";
    int value1;
    cin>>value1;


    for(int i = 0; i < value1; i+=5){ //En vez de asignarle directamente un numero, cree una variable de tipo int con ese numero y en vez de i++ hice que haga iteraciones de a 10.
        cout << "El numero "<< i << " sigue siendo mas chico que " << value1 <<  endl;
    }

    return 0;
}
