//
//  main.cpp
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#include <iostream>
#include "Maze.h"
#include "Crawler.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, Maze!\n";
    
    Maze mz(10);
   // std::cout << foo.getSize();
    mz.displayEnumerated();
    
    Crawler foo;
    foo.displayGenomeArr();
    //implement an array based popwalk for crawler... using Maze's isValidMove function
    
    
    
    
    return 0;
}
