/*#include <iostream>

using namespace std;

int main()
{
    string texto1 = "Quiero saber cuantos caracteres tiene este string";

    double tamanioString = texto1.size();

    cout << tamanioString << endl;

    return 0;
}
*/

/*#include <iostream>

using namespace std;

int main()
{
    string texto2 = "Quiero saber el tamanio maximo que puede tener este string";
    double tamanioMaximo = texto2.max_size();

    cout << tamanioMaximo << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
    string texto3 = "Aca lo que quiero es buscar cierta palabra en especifico";
    int encontrarPalabra = texto3.find("lo", 0);

    cout << encontrarPalabra << endl;

    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    string pepe = "bepito pistoleiro";
    pepe[0] = 'p';
    pepe.clear();

    cout << pepe << endl;

    return 0;
}
