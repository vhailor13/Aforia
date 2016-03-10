//
//  Input.cpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#include "Input.h"

using namespace Aforia::Input;

void Input::setMoveLeft( std::function<void()> moveLeft)
{
    _onMoveLeft = moveLeft;
}

void Input::setMoveRight(std::function<void()> moveRight)
{
    _onMoveRight = moveRight;
}

void Input::setMoveUp(   std::function<void()> moveUp)
{
    _onMoveUp = moveUp;
}

void Input::setMoveDown( std::function<void()> moveDown)
{
    _onMoveDown = moveDown;
}

void Input::doIdle()
{
    int key = getchar();
    
    if ( key == 27 )
    {
        key = getchar();
    }
    else
    {
        return;
    }
    
    if ( key == 91 )
    {
        key = getchar();
    }
    
    fseek(stdin,0,SEEK_END);
    
    
    switch (key)
    {
        case 68:
            _onMoveLeft();
            break;
            
        case 65:
            _onMoveUp();
            break;
            
        case 67:
            _onMoveRight();
            break;
            
        case 66:
            _onMoveDown();
            break;
            
        default:
            break;
    }
}
