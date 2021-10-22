#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string value1 = "no";
    int value2 = 5;

    if(value1 == "yes" && value2 > 5){
        cout << "Correcto!" << endl;

    }else{
        cout << "Cualquiera te mandaste" << endl; //seria este porque 5 no es mas grande que 5
    }

    return 0;
}
