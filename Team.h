#ifndef VOLLEYBALL_MANAGER_TEAM_H
#define VOLLEYBALL_MANAGER_TEAM_H

#include <vector>
#include "Player.h"

class Team {
private:
    std::vector<Player> players;
    double skill;
public:
    Team();
    double getSkill();
};


#endif //VOLLEYBALL_MANAGER_TEAM_H
