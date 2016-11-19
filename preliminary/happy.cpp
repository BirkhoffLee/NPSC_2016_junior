#include <iostream>

int main () {
    int Y, M, D, X, T;

    std::cin >> Y >> M >> D >> X >> T;

    if (X <= 5) {
        if (T == 1)
            std::cout << "happy" << std::endl;
        else
            std::cout << "unhappy" << std::endl;
    } else {
        if (T == 0)
            std::cout << "happy" << std::endl;
        else
            std::cout << "unhappy" << std::endl;
    }

    return 0;
}