#include "Score.h"

Score::Score(std::string name, unsigned long score) {

    this->name = name;
    this->score = score;
}

void Score::setName(std::string name) {

    this->name = name;
}

std::string Score::getName() {

    return this->name;
}


void Score::setScore(unsigned long score) {

    this->score = score;
}

unsigned long Score::getScore() {

    return this->score;
}
