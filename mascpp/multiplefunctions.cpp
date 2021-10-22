#include <iostream>
#include <cmath>

using namespace std;

int carrito()
{
    string compra[10] = {};
    compra[0] = "Vacio";
    compra[1] = "Asado";
    compra[2] = "Chinchulines";
    compra[3] = "Xbox Series X";
    compra[4] = "Gears of war";

    int stock[42] = {};
    stock[0] = 4;
    stock[1] = 2;
    stock[2] = 1;
    stock[3] = 1;
    stock[4] = 5;

    cout << stock[0] + stock[1] + stock[2] << endl;
}

int main()
{
    cout << "stock de mercaderia para asado:" << endl;
    carrito();

    return 0;
}
