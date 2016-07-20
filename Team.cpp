#include "Team.h"
#include <iostream>

Team::Team(){
    for (int i = 0; i < 7; ++i) {
        int randSkill = rand() % 10;
        players.push_back(Player(randSkill));
        skill += randSkill;
    }
    skill /= 7;

}
double Team::getSkill() {
    return skill;
}