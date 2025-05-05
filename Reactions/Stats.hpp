//
//  Stats.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef STATS_H
#define STATS_H

class Stats {
private:
    int health;
    int strength;
    int defense;
    
public:
    Stats(int h, int str, int def);
    void takeDamage(int amount);
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
};

#endif /* Stats_hpp */
