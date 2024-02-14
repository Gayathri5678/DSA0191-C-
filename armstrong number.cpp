#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, sum = 0, digit, numDigits = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
