//
//  Game.hpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#pragma once

#include "../Input/Input.h"
#include "../Model/Character.h"

namespace Aforia { namespace Game {

class Game
{
private:
    Input::Input _input;
    
    Character _character;
    
private:
    void _initializeInput();
    
    
public:
    Game();
    
    Character& getCharacter();
    
    void doIdle();
};
    
}}
