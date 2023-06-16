#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    float L, R, S, D;
    const float Pi = 3.14;
    cout<<"Type square of the circle: ";
    cin >> S;
    R = S/Pi;
    L = 2 * Pi * R;
    D = 2*R;
    cout << "The radius of the circle is equal: " << R << endl;
    cout << "The length of the circle is equal: " << L << endl;
    cout << "The diametr of the circle is equal: " << D << endl;

    return 0;
}
