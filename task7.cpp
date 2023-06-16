
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    float L, S, R;
    const float Pi = 3.14;
    cout<<"Type radius: ";
    cin >> R;
    L = 2 * Pi * R;
    S = Pi * pow(R, 2);
    cout << "The lenght of circle is equal: " << L << endl;
    cout << "The square of circle is equal: " << S << endl;

    return 0;
}
