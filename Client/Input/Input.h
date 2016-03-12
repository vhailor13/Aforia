//
//  Input.hpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#pragma once

#include <functional>
#include "pthread.h"

namespace Aforia { namespace Input {
    

class Input
{
private:

	pthread_t thread;

    // Movement
    std::function<void()> _onMoveLeft;
    std::function<void()> _onMoveRight;
    std::function<void()> _onMoveUp;
    std::function<void()> _onMoveDown;
    
public:

	Input();

    // Movement
    void setMoveLeft( std::function<void()> moveLeft);
    void setMoveRight(std::function<void()> moveRight);
    void setMoveUp(   std::function<void()> moveUp);
    void setMoveDown( std::function<void()> moveDown);
    
    void doIdle();
};

}}