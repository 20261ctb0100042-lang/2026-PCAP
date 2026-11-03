#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    double volume;

    cin >> r;
    volume = ( 4.0 / 3.0 ) * 3.14159 * r * r * r;
    cout << fixed << setprecision(4);
    cout << "VOLUME = " << volume << endl;

    return 0;
}