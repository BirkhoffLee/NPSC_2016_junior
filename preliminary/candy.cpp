#include <iostream>

int main () {
    int number;

    std::cin >> number;

    for (int i = 0; i < number; i ++) {
        int N, M, K, candies;

        std::cin >> N >> M >> K;

        candies = (M - (M % N)) / N;

        if (M % N >= K) {
            candies ++;
        }

        std::cout << candies << std::endl;
    }

    return 0;
}