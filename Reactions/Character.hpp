//
//  Character.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include <memory>
#include "Stats.hpp"
#include "Equipment.hpp"

class Character {
private:
    std::string name;
    Stats stats;
    std::vector<std::shared_ptr<Equipament>> inventory;
    
public:
    Character(const std::string& n, Stats s);
    const std::string& getName() const;
    Stats& getStats();
    
    void equip(std::shared_ptr<Equipament> item);
    void attack(Character& target);
    void showStatus() const;
};

#endif /* Character_hpp */
