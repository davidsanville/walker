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
//#include <stack>

class Crawler {
    void walk(Maze&);
    void walk(int x,int y);
    void popWalk(); //just return top of genome stack
    
private:
    int genome[128];
    //stack genome;
};

#endif /* Crawler_hpp */
