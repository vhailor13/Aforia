//
//  Scene.cpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#include "Scene.h"

#include "curses.h"
#include <stdlib.h>

using namespace Aforia::Scene;

Scene::Scene(Aforia::Game::Game& game, int max_x, int max_y):
_game(game),
_maxX(max_x),
_maxY(max_y)
{
    _initializeColorPairs();
}

void Scene::_initializeColorPairs()
{
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
}

void Scene::render()
{
    _renderEnviroment();
    _renderPlayers();
}

void Scene::_renderEnviroment()
{
    for ( int y = 0; y < _maxY; y++ )
    {
        move(y, 0);
        for ( int x = 0; x < _maxX; x++ )
        {
            attrset(COLOR_PAIR(1) | A_NORMAL);
            addch('.');
        }
    }
}

void Scene::_renderPlayers()
{
    // Character
    auto pos = _game.getCharacter().getPosition();
    attrset(COLOR_PAIR(2));
    mvaddstr(pos.y, pos.x, "@");
    
}
