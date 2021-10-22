#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Que queres comer? " << endl;
    string answer1;
    getline(cin, answer1);

    cout << "Y para tomar? " << endl;
    string answer2;
    getline(cin, answer2);

    cout << "Cuanto crees que vas a terminar pagando la " << answer1 << " con una " << answer2 << "?" << endl;
    double answer3;
    cin >> answer3;

    double propina = (answer3 * 10) / 100;
    cout << "La propina correcta seria de $" << propina << endl;

    return 0;
}
