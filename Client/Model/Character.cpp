//
//  Character.cpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#include "Character.h"

using namespace Aforia::Game;

void Character::setPosition(Utils::Point pos)
{
    _pos = pos;
}

Aforia::Utils::Point Character::getPosition()
{
    return _pos;
}
