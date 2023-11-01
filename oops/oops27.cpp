#include <iostream>

template <typename T>
T Max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

int main() {
    int intResult = Max(10, 20);
    double doubleResult = Max(3.14, 2.71);
    std::string stringResult = Max("apple", "banana");

    std::cout << "Max of 10 and 20 is: " << intResult << std::endl;
    std::cout << "Max of 3.14 and 2.71 is: " << doubleResult << std::endl;
    std::cout << "Max of 'apple' and 'banana' is: " << stringResult << std::endl;

    return 0;
}