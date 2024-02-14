#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr;
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    std::sort(arr.begin(), arr.end());

    int secondLargest = arr[size - 2]; 

    std::cout << "Second largest element in the array: " << secondLargest << std::endl;

    return 0;
}
