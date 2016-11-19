#include <iostream>

int main () {
    int N, K, m_opened = 0;
    bool firstOne = false;
    std::string S;

    std::cin >> N >> S >> K;

    for (int i = S.size(); i > -1; i--) {
        if (i + 1 == K) continue;
        if (m_opened >= N - 2) continue;

        if (S[i] == 'M') {
            if (!firstOne) {
                firstOne = true;
                std::cout << i + 1;
            } else {
                std::cout << " " << i + 1;
            }

            m_opened++;
        }
    }

    std::cout << std::endl;

    return 0;
}