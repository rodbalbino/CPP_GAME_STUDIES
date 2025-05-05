//
//  FireEffect.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef FIREEFFECT_HPP
#define FIREEFFECT_HPP

#include "Effect.hpp"
#include <iostream>

class FireEffect : public Effect {
private:
    int damage;
    
public:
    FireEffect(int dmg) : damage(dmg){}
    void apply(Character& target) override;
    std::string name() const override {return "FireEffect"; }
};

#endif /* FireEffect_hpp */
