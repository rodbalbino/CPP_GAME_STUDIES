//
//  Effect.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef EFFECT_H
#define EFFECT_H

#include <string>
#include "Character.hpp"

class Effect {
    
public:
    virtual ~Effect() = default;
    virtual void apply(Character& target) = 0;
    virtual std::string name() const = 0;
};

#endif /* Effect_hpp */
