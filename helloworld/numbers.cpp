/*#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 11;
    double b = 4.20;
    double c = 12.3;
    double d = 1.2;

    double suma = a + b;
    double resta = a - b;
    double multiply = c * d;
    double division = c / d;

    cout << suma << endl;
    cout << resta << endl;
    cout << multiply << endl;
    cout << division << endl;


    return 0;
}
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 11;
    double b = 4.20;
    double c = 12.3;
    double d = 1.2;
    double e = 25;

    double op1 = min(a,b);
    double op2 = max(a,d);
    double op3 = floor(c);
    double op4 = ceil(a+b+c+d); //el resultado original sin ceil seria 28.7
    double op5 = pow(b,2);
    double op6 = sqrt(e); // e = 25

    cout << op1 << endl;
    cout << op2 << endl;
    cout << op3 << endl;
    cout << op4 << endl;
    cout << op5 << endl;
    cout << op6 << endl;

    return 0;
}
