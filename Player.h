#ifndef VOLLEYBALL_MANAGER_PLAYER_H
#define VOLLEYBALL_MANAGER_PLAYER_H


class Player {

private:
    int skills;
public:
    Player(){};
    Player(int skills) : skills(skills) { }

    int getSkills() const;

};


#endif //VOLLEYBALL_MANAGER_PLAYER_H
