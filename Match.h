#ifndef VOLLEYBALL_MANAGER_MATCH_H
#define VOLLEYBALL_MANAGER_MATCH_H


#include <vector>
#include <array>
#include "Team.h"

class Match {
private:
    int a;
    int aGames;
    int b;
    int bGames;
    Player* players;
    Team ateam;
    Team bteam;

    std::vector<std::array<int, 2>> result;
    bool gameEnded(int a, int aGames, int b, int bGames);
public:
    Match();

    void play();
    void printResult();

    bool whoWinsPoint(Team ateam, Team bteam);
};


#endif //VOLLEYBALL_MANAGER_MATCH_H
