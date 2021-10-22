#include <iostream>
#include <cmath>

using namespace std;

int suma(int val1, int val2, int val3)
{
    cout << val1 + val2 + val3 << endl;
    cout << val1 - val2 - val3 << endl;
    cout << val1 * val2 * val3 << endl;
    cout << val1 / val2 / val3 << endl;
}

int main()
{
    int var1;
    cin>>var1;
    int var2;
    cin>>var2;
    int var3;
    cin>>var3;

    suma(var1,var2,var3);

    return 0;
}
