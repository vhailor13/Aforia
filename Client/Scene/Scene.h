//
//  Scene.hpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#pragma once

#include "../Game/Game.h"

namespace Aforia { namespace Scene {

class Scene
{
private:
    Game::Game& _game;
    
    int _maxX;
    int _maxY;
    
private:
    void _initializeColorPairs();
    
    void _renderEnviroment();
    void _renderPlayers();
    
public:
    
    Scene(Game::Game& game, int max_x, int max_y);
    
    void render();
    
};
    
}}
