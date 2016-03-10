//
//  Character.hpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#pragma once

#include "../Utils/GeomTypes.h"

namespace Aforia { namespace Game {

class Character
{
    
private:
    Utils::Point _pos;

public:
    void setPosition(Utils::Point pos);
    Utils::Point getPosition();

};
    
}}
