//
//  Crawler.hpp
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#ifndef Crawler_hpp
#define Crawler_hpp

#include "Maze.h"
#include <stdio.h>

class Crawler {
    void walk(Maze&);
    void walk(int x,int y,Maze);
    
private:
    int genome[128];
};

#endif /* Crawler_hpp */
