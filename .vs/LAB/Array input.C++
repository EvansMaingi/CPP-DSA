#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    cout << "Enter 5 values:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / 5.0;

    cout << "Average: " << average << endl;

    return 0;
}