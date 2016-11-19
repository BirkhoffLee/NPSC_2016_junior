#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    int donut_amount, wanted;

    std::cin >> donut_amount >> wanted;

    std::vector<int> satisfy;
    std::vector<int> very_satisfy;

    for (int i = 0; i < donut_amount; i++) {
        int this_satisfy;
        std::cin >> this_satisfy;

        satisfy.push_back(this_satisfy);
        very_satisfy.push_back(this_satisfy);
    }

    for (int i = 0; i < donut_amount; i++) {
        very_satisfy.push_back(satisfy[i]);

        for (int j = i + 1; j < donut_amount; j++) {
            very_satisfy.push_back(very_satisfy[very_satisfy.size() - 1] + satisfy[j]);
        }
    }

    std::sort(very_satisfy.begin(), very_satisfy.end());

    std::vector<int> super_satisfy;

    for (int i = very_satisfy.size(); i > -1; i--) {
        super_satisfy.push_back(very_satisfy[i]);
    }

    std::cout << super_satisfy[wanted] << std::endl;

    return 0;
}