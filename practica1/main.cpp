#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string nombre = "Pepito";
    int valor1 = 2;
    int valor2 = 360;
    string ejer1 = "correr";
    int tiempo1 = 30;
    int cal = 420;

    cout << "Hola " << nombre << "!" << endl;
    cout << "Te comiste " << min(valor1, valor2) << " porciones de pizza y te costaron $" << max(valor1, valor2) << endl;
    cout << "Te conviene " << ejer1 << " " << tiempo1 << " minutos para quemar las " << cal << " calorias" << endl;

    return 0;
}
