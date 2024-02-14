#include <iostream>
using namespace std;
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    cout << num << (sumOfDivisors(num) > num ? " is an abundant number." : " is not an abundant number.") << endl;

    return 0;
}
