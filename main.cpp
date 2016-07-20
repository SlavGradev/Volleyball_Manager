#include <iostream>
#include "Match.h"

using namespace std;

int main() {
    srand(time(NULL));
    Match* match = new Match();
    match->play();
    match->printResult();
    return 0;
}
