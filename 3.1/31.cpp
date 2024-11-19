#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y1, y2, y;

    cout << "x=";
    if (!(cin >> x)) {
        cout << "" << endl;
        return 1;
    }

    //Умова
    y1 = 8.1 + pow(x, 3);

    // Перша 
    if (x <= -3.5) {
        y2 = tan(2 * x) - tan(x / 2);
    }
    if (x > -3.5 && x <= 1) {
        y2 = atan(1 / fabs(x + 1));
    }
    if (x > 1) {
        y2 = pow(x, -5) - 1;
    }

    y = y1 + y2;
    cout << "y1 = " << y << endl;  

    // Друга 
    if (x <= -3.5) {
        y2 = tan(2 * x) - tan(x / 2);
    }
    else if (x > -3.5 && x <= 1) {
        y2 = atan(1 / fabs(x + 1));
    }
    else {
        y2 = pow(x, -5) - 1;
    }

    y = y1 + y2;
    cout << "y2 = " << y << endl;  

    return 0;
}
