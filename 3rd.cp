#include <iostream>
using namespace std;

int main() {
    long long f;
    int i;
    char again;

    do {
        cout << "Enter a number: ";
        cin >> i;

        if (i < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            f = 1; // reset factorial for each new input
            for (int j = 1; j <= i; j++) {
                f *= j;
            }
            cout << "The factorial of " << i << " is: " << f << endl;
        }

        cout << "Do you want to calculate another factorial? (y/n): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    return 0;
}
