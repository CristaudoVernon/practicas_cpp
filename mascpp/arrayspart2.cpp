#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string champs[10] = {};

    cout << "tira un champ" << endl;
    getline(cin, champs[0]);

    cout << "tira otro champ" << endl;
    getline(cin, champs[1]);

    cout << "El tercero a ver" << endl;
    getline(cin, champs[2]);

    cout << "el ultimo" << endl;
    getline(cin, champs[3]);

    cout << champs[0] << endl;
    cout << champs[1] << endl;
    cout << champs[2] << endl;
    cout << champs[3] << endl;

    return 0;
}
