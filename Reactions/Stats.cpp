//
//  Stats.cpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#include "Stats.hpp"

Stats::Stats(int h, int str, int def)
: health(h), strength(str), defense(def){}

void Stats::takeDamage(int amount){
    health -= amount;
    if (health < 0) health = 0;
}

int Stats::getHealth() const { return health;}
int Stats::getStrength() const {return strength;}
int Stats::getDefense() const {return defense;}
