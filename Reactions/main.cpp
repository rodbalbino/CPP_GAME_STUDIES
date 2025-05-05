#include <iostream>
#include "Character.hpp"
#include "Stats.hpp"
#include "Equipment.hpp"
#include "FireEffect.hpp"

int main(){
    Character hero("Asterion", Stats(100, 20, 10));
    Character enemy("Goblin", Stats(60, 15, 5));
    
    auto sword = std::make_shared<Equipament>("Sword of Light", 10, 0);
    
    hero.equip(sword);
    hero.showStatus();
    enemy.showStatus();
    
    std::cout << "\nCombat Begins!\n";
    hero.attack(enemy);
    
    FireEffect fire(15);
    fire.apply(enemy);
    
    enemy.showStatus();
    
    return 0;
}
