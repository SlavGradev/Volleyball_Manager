#ifndef VOLLEYBALL_MANAGER_MATCH_H
#define VOLLEYBALL_MANAGER_MATCH_H


#include <vector>
#include <array>

class Match {
private:
    int a;
    int aGames;
    int b;
    int bGames;
    std::vector<std::array<int, 2>> result;
    bool gameEnded(int a, int aGames, int b, int bGames);
public:

    Match() : a(), aGames(), b(), bGames(), result(result) { }

    void play();
    void printResult();
};


#endif //VOLLEYBALL_MANAGER_MATCH_H
