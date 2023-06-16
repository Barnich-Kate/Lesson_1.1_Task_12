#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    float R1, R2, S1, S2, S3;
    const float Pi = 3.14;
    cout<<"Type radius of the first circle: ";
    cin >> R1;
    cout<<"Type radius of the second circle: ";
    cin >> R2;
    S1 = Pi * pow(R1, 2);
    S2 = Pi * pow(R2, 2);
    S3 = S1 - S2;
    cout << "The square of the first circle is equal: " << S1 << endl;
    cout << "The square of the second circle is equal: " << S2 << endl;
    cout << "The square of the third circle is equal: " << S3 << endl;

    return 0;
}
