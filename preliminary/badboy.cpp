#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int N, M;
    std::vector<int> W;
    std::vector<int> S;
    long long sum = 0;

    std::cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int tmp;
        std::cin >> tmp;

        W.push_back(tmp);
    }

    for (int i = 0; i < M; i++) {
        int tmp;
        std::cin >> tmp;

        S.push_back(tmp);
    }

    std::sort(W.begin(), W.end());
    std::sort(S.begin(), S.end());

    int k = 0;
    for (int i = W.size() - 1; i > -1; i--) {
        sum += W[i] * S[k];
        k++;
    }

    std::cout << sum << std::endl;

    return 0;
}