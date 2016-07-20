#include <iostream>
#include "Match.h"


Match::Match(): a(), aGames(), b(), bGames(), result(result),ateam(),bteam() {

}

bool Match::gameEnded(int a, int a_games, int b, int b_games){
    if(a_games + b_games < 4) {
        if (a < 25 && b < 25)
            return false;
        else
            return abs(a - b) >= 2;
    } else {
        if (a < 15 && b < 15)
            return false;
        else
            return (abs(a - b) >= 2);
    }
}
void Match::play() {

    while(aGames < 3 && bGames <3){
        while(!gameEnded(a, aGames, b, bGames)){
            if(whoWinsPoint(ateam, bteam))
                a += 1;
            else
                b += 1;
        }
        result.push_back({a,b});
        if(a > b)
            aGames += 1;
        else
            bGames += 1;
        a = 0;
        b = 0;
    }
}
void Match::printResult() {
    for (int i = 0; i < result.size(); ++i) {
        std::cout<<result[i][0]<<" "<<result[i][1]<<std::endl;
    }
    std::cout<<aGames<<" "<<bGames<<std::endl;
    double sum = ateam.getSkill() + bteam.getSkill();
    std::cout<<"aSkill-"<<ateam.getSkill()/sum<<":bSkill-"<<bteam.getSkill()/sum;
}

bool Match::whoWinsPoint(Team ateam, Team bteam) {
    double sum = ateam.getSkill() + bteam.getSkill();
    if((rand() % (int)sum) < ateam.getSkill()){
        return true;
    }else{
        return false;
    }
}

