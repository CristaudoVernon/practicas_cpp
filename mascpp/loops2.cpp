#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Crea un password: ";
    string createPass;
    getline(cin, createPass);

    cout << "Cual es el password?" << endl;
    string pass;
    getline(cin, pass);

    while (createPass != pass){
        cout << "Password incorrecto, intente nuevamente:" << endl;
        getline(cin, pass);
    }

    cout << "Password correcto!" << endl;

    return 0;
}
