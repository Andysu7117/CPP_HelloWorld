#include <iostream>

int main() {
    int x {};
    int y {};
    int z {};

    std::cout << "Enter three numbers: ";

    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", " << z << ".\n";
    return 0;
}
