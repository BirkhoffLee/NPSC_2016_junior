/* 佛祖保佑 永無 bug */

#include <iostream>

int main () {
    int numberOfDice, diceSum, possibleNumbers = 0;
    std::cin >> numberOfDice >> diceSum;

    for (int i = 1; i < 7; i++) {
        if (numberOfDice == 1) {
            if (i == diceSum) {
                ++possibleNumbers;
                // std::cout << "wowi" << ++possibleNumbers << std::endl;
                break;
            }
        }

        for (int j = 1; j < 7; j++) {
            if (numberOfDice == 2) {
                if (i + j == diceSum) {
                    ++possibleNumbers;
                    // std::cout << "wowj" << ++possibleNumbers << std::endl;
                    break;
                }
            }

            for (int k = 1; k < 7; k++) {
                if (numberOfDice == 3) {
                    if (i + j + k == diceSum) {
                        ++possibleNumbers;
                        // std::cout << "wowk" << ++possibleNumbers << std::endl;
                        break;
                    }
                }

                for (int l = 1; l < 7; l++) {
                    if (numberOfDice == 4) {
                        if (i + j + k + l == diceSum) {
                            ++possibleNumbers;
                            // std::cout << "wowl" << ++possibleNumbers << std::endl;
                            break;
                        }
                    }

                    for (int m = 1; m < 7; m++) {
                        if (numberOfDice == 5) {
                            if (i + j + k + l + m == diceSum) {
                                ++possibleNumbers;
                                // std::cout << "wowm" << ++possibleNumbers << std::endl;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    std::cout << possibleNumbers << std::endl;

    return 0;
}