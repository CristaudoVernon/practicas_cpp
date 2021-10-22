#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Bienvenido al proyecto final de c++!" << endl;

    cout << "Por favor crea una nueva cuenta" << endl;

    cout << "Elige un nombre de usuario: ";
    string username;
    getline(cin, username);

    cout << "Elige un password para tu cuenta: ";
    string password;
    getline(cin, password);

    cout << "Por favor ingresa tu usuario y password asginados previamente" << endl;
    cout << "Usuario: " << endl;
    string user;
    getline(cin, user);

    cout << "Password: " << endl;
    string pass;
    getline(cin, pass);

    while(username != user || password != pass){
        cout << "Usuario y/o password incorrecto, por favor intente nuevamente" << endl;
        cout << "Usuario: " << endl;
        getline(cin, user);
        cout << "Password: " << endl;
        getline(cin, pass);
    }
    cout << "Ingreso a la app cafeteria exitoso!" << endl;

    cout << "Como nuevo usuario tenes de regalo $500 en tu billetera virtual para pedir lo que quieras" << endl;

    double balance = 500;

    cout << "Te gustaria ordenar algo? ('si' o 'no'): ";
    string wantorder;
    getline(cin, wantorder);

    if(wantorder == "si"){
        cout << "A continuacion veras la lista de productos:" << endl;
        string cafes[] = {"Expresso", "Americano", "Irlandes", "Vienes", "Cappuccino"};
        double precioscafe[] = {189.90, 189.90, 219.90, 199.90, 209.90};

        cout << "1. " << cafes[0] << " -- $" << precioscafe[0] << endl;
        cout << "2. " << cafes[1] << " -- $" << precioscafe[1] << endl;
        cout << "3. " << cafes[2] << " -- $" << precioscafe[2] << endl;
        cout << "4. " << cafes[3] << " -- $" << precioscafe[3] << endl;
        cout << "5. " << cafes[4] << " -- $" << precioscafe[4] << endl;

        cout << "Tu eleccion es: (ingrese el numero) ";
        int eleccion;
        cin >> eleccion;

        while (eleccion > 5 || eleccion < 1){
            cout << eleccion << " no es un numero valido, por favor intente nuevamente: " << endl;
            cin >> eleccion;
        }

        if(eleccion == 1){
            cout << "Pediste " << cafes[0] << endl;
            cout << "El total de tu pedido es: $" << precioscafe[0] << endl;
            cout << "Te quedan $" << balance - precioscafe[0] << " en tu billetera virtual" << endl;
        }else if (eleccion == 2){
            cout << "Pediste " << cafes[1] << endl;
            cout << "El total de tu pedido es: $" << precioscafe[1] << endl;
            cout << "Te quedan $" << balance - precioscafe[1] << " en tu billetera virtual" << endl;
        }else if (eleccion == 3){
            cout << "Pediste " << cafes[2] << endl;
            cout << "El total de tu pedido es: $" << precioscafe[2] << endl;
            cout << "Te quedan $" << balance - precioscafe[2] << " en tu billetera virtual" << endl;
        }else if (eleccion == 4){
            cout << "Pediste " << cafes[3] << endl;
            cout << "El total de tu pedido es: $" << precioscafe[3] << endl;
            cout << "Te quedan $" << balance - precioscafe[3] << " en tu billetera virtual" << endl;
        }else if (eleccion == 5){
            cout << "Pediste " << cafes[4] << endl;
            cout << "El total de tu pedido es: $" << precioscafe[4] << endl;
            cout << "Te quedan $" << balance - precioscafe[4] << " en tu billetera virtual" << endl;
        }

    }else if(wantorder == "no"){
        cout << "Cuando gustes podras disfrutar de un rico cafe, muchas gracias." << endl;
    }



    return 0;
}
