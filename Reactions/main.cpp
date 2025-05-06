#include <iostream>
#include "Character.hpp"
#include "Stats.hpp"
#include "Equipment.hpp"
#include "FireEffect.hpp"
#include "BattleManager.hpp"
#include <memory>

int main() {
    auto hero1 = std::make_shared<Character>("Astarion", Stats(100, 20, 10));
    auto hero2 = std::make_shared<Character>("Shadowheart", Stats(90, 18, 8));
    
    auto goblin1 = std::make_shared<Character>("Goblin", Stats(60, 15, 5));
    auto goblin2 = std::make_shared<Character>("Orc", Stats(80, 17, 6));

    auto sword = std::make_shared<Equipament>("Sword of Light", 10, 0);
    hero1->equip(sword);

    BattleManager battle({hero1, hero2}, {goblin1, goblin2});
    battle.startBattle();

    return 0;
}
