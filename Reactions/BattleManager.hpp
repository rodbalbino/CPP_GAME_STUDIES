//
//  BattleManager.hpp
//  Reactions
//
//  Created by Rodrigo Balbino on 5/5/25.
//

#ifndef BATTLEMANAGER_HPP
#define BATTLEMANAGER_HPP

#include <memory>
#include "Character.hpp"
#include <vector>

class BattleManager {
private:
    std::vector<std::shared_ptr<Character>> teamA;
    std::vector<std::shared_ptr<Character>> teamB;
    
    bool isTeamAlive(const std::vector<std::shared_ptr<Character>>& team);
    
public:
    BattleManager(std::vector<std::shared_ptr<Character>> a, std::vector<std::shared_ptr<Character>> b);
    void startBattle();
};

#endif /* BattleManager_hpp */
