#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    float L, R, S;
    const float Pi = 3.14;
    cout<<"Type length of the circle: ";
    cin >> L;
    R = L / (2*Pi);
    S = Pi * pow(R, 2);
    cout << "The radius of the circle is equal: " << R << endl;
    cout << "The square of the circle is equal: " << S << endl;

    return 0;
}
