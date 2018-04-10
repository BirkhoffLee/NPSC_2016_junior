#include <iostream>

void move (int &N, std::string &schedule, int &moves) {
    int sleeps = 0, eats = 0;
    
    for (int i = 0; i < N; ++i) {
        if (schedule[i] == 's') {
            sleeps++;
        } else {
            eats++;
            
            if (eats > sleeps) {
                std::string toMove = schedule.substr(0, i + 1);
                schedule = schedule.substr(i + 1, schedule.size() - i) + toMove;
                moves += toMove.size();
                sleeps = 0; eats = 0;
                move(N, schedule, moves);
                break;
            }
        }
    }
}

int main () {
    int N, sleeps = 0, eats = 0, moves = 0;
    std::string schedule;

    std::cin >> N >> schedule;

    for (int i = 0; i < N; ++i) {
        if (schedule[i] == 's') {
            sleeps++;
        } else {
            eats++;
        }
    }

    if (eats > sleeps) {
        std::cout << -1;
        return 0;
    }

    sleeps = 0; eats = 0;

    move(N, schedule, moves);

    std::cout << moves;

    return 0;
}