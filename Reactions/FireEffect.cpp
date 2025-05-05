//
//  FireEffect.cpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#include "FireEffect.hpp"

void FireEffect::apply(Character& target){
    std::cout << "🔥 " << name() << " hits " << target.getName() << " for " << damage << " fire damage!\n";
    target.getStats().takeDamage(damage);
}
