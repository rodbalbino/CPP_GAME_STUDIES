//
//  Character.cpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string& n, Stats s) : name(n), stats(s) {}

void Character::equip(std::shared_ptr<Equipament> item){
    inventory.push_back(item);
}


void Character::attack(Character &target){
    int baseDamage = stats.getStrength();
    for (const auto& item : inventory) {
        baseDamage += item->attackBonus;
    }
    
    int damage = baseDamage - target.stats.getDefense();
    if (damage < 0 ) damage = 0;
    
    std::cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
    target.stats.takeDamage(damage);
}

void Character::showStatus() const {
    std::cout << "Status of " << name << ":\n";
    std::cout << "Health: " << stats.getHealth() << ":\n";
    std::cout << "Strength: " << stats.getStrength() << ":\n";
    std::cout << "Defense: " << stats.getDefense() << ":\n";
}

const std::string& Character::getName() const {
    return name;
}

Stats& Character::getStats(){
    return stats;
}
