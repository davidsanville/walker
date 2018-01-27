//
//  main.cpp
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#include <iostream>
#include "Maze.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Maze!\n";
    
    Maze foo(10);
    std::cout << foo.getSize();
    foo.displayEnumerated();
    return 0;
}
