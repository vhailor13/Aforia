//
//  GeomTypes.h
//  Aforia
//
//  Created by Victor Sukochev on 08/03/16.
//
//

#pragma once

namespace Aforia { namespace Utils {

struct Point
{
    int x;
    int y;
};
    
struct Size
{
    int width;
    int height;
};
    
Point PointMake(int x, int y);
    
}}
