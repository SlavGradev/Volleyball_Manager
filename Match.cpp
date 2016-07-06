#include <iostream>
#include "Match.h"

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
    srand(time(NULL));
    while(aGames < 3 && bGames <3){
        while(!gameEnded(a, aGames, b, bGames)){
            if(rand() % 2 == 1)
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
    std::cout<<aGames<<" "<<bGames;
}