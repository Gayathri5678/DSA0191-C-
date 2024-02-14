#include <iostream>
using namespace std;

double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);

    cout << "Area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
