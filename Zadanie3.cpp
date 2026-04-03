#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:
    if (number < 0) {
        cout << "Число отрицательное" << endl;
    } else {
        cout << "Число не отрицательное" << endl;
    }

    return 0;
}