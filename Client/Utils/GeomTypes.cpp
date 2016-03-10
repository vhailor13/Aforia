//
//  GeomTypes.cpp
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#include "GeomTypes.h"

namespace Aforia { namespace Utils {

Point PointMake(int x, int y)
{
    Point point;
    point.x = x;
    point.y = y;
    
    return point;
}
    
}}
