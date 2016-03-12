//
//  Game.cpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#include "Game.h"

using namespace Aforia::Game;

Game::Game()
{
    _initializeInput();
    _character.setPosition(Utils::PointMake(1,1));
}

void Game::_initializeInput()
{
    _input.setMoveDown([this]()
    {
        auto pos = _character.getPosition();
        _character.setPosition(Utils::PointMake(pos.x, pos.y + 1));
    });
    
    _input.setMoveUp([this]()
                       {
                           auto pos = _character.getPosition();
                           _character.setPosition(Utils::PointMake(pos.x, pos.y - 1));
                       });
    
    _input.setMoveLeft([this]()
                       {
                           auto pos = _character.getPosition();
                           _character.setPosition(Utils::PointMake(pos.x - 1, pos.y));
                       });
    
    _input.setMoveRight([this]()
                       {
                           auto pos = _character.getPosition();
                           _character.setPosition(Utils::PointMake(pos.x + 1, pos.y));
                       });
}

Character& Game::getCharacter()
{
    return _character;
}

void Game::doIdle()
{
       //  _input.doIdle();
}
