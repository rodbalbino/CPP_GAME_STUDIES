//
//  Equipment.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef EQUIPAMENT_H
#define EQUIPAMENT_H

#include <string>

class Equipament {
    
public:
    std::string name;
    int attackBonus;
    int defenseBonus;
    
    Equipament(const std::string& n, int atk, int def);
};

#endif /* Equipment_hpp */
