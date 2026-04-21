#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;

    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3.0)  * pow(radius, 3);

    cout << "Volume of sphere: " << volume << endl;

    return 0;
}