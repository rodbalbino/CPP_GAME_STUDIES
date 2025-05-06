//
//  BattleManager.cpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//


#include "BattleManager.hpp"
#include <iostream>

BattleManager::BattleManager(std::vector<std::shared_ptr<Character>> a, std::vector<std::shared_ptr<Character>> b)
    : teamA(std::move(a)), teamB(std::move(b)) {}

bool BattleManager::isTeamAlive(const std::vector<std::shared_ptr<Character>>& team) {
    for (const auto& c : team) {
        if (c->isAlive()) return true;
    }
    return false;
}

void BattleManager::startBattle() {
    size_t turn = 0;

    while (isTeamAlive(teamA) && isTeamAlive(teamB)) {
        std::cout << "\n--- Turn " << ++turn << " ---\n";

        for (size_t i = 0; i < teamA.size(); ++i) {
            if (teamA[i]->isAlive() && i < teamB.size() && teamB[i]->isAlive()) {
                teamA[i]->attack(*teamB[i]);
            }
        }

        for (size_t i = 0; i < teamB.size(); ++i) {
            if (teamB[i]->isAlive() && i < teamA.size() && teamA[i]->isAlive()) {
                teamB[i]->attack(*teamA[i]);
            }
        }
    }

    std::cout << "\n--- Battle Ended ---\n";
    if (isTeamAlive(teamA)) {
        std::cout << "Team A wins!\n";
    } else {
        std::cout << "Team B wins!\n";
    }
}
