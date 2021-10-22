#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Te cabe la pizza? ('y' or 'n')" << endl;
    string value1;
    getline(cin, value1);

    cout << "Te caben las hamburguesas? ('y' or 'n')" << endl;
    string value2;
    getline (cin, value2);

    if(value1 == "y" && value2 == "y"){
        cout << "Vos si que tenes buen gusto" << endl;
    }else if(value1 == "y" && value2 == "n"){
        cout << "Como te van a gustar las pizzas pero no las hamburguesas?" << endl;
    }else if(value1 == "n" && value2 == "y"){
        cout << "Puedo aceptar que no te guste la pizza pero si las hamburguesas" << endl;
    }else{
        cout << "Mejor ni te me acerques porque no la vas a pasar bien" << endl;
    }

    return 0;
}
