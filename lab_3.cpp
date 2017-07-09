#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
        int someInt,
            w = 5, x = 9, y = 2, z = 7;
        char someChar = 'A';
        cout << "tryIt3A output \n";
        z += 3;
        cout << z << "  " << z % w << endl;
        z *= w + y;
        cout << z << endl;
        z -= 60.1;
        cout << z << endl;
        cout << (x-1) / (x-w) * y << endl;
        cout << (x-1) / ((x-w) * y) << endl;
        cout << static_cast<double>(x) / y << endl;
        cout << x / y << endl;
        cout << (w + x % 7 / y) << endl;
        cout << (abs(y - w) + sqrt(x)) << endl;
        someInt = someChar;
        cout << someChar << "  "
             << someInt << endl; //returns 65 because the ascii number of A is 65, someInt becomes 65
        return 0;
}
