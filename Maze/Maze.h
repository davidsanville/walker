//
//  Maze.h
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#ifndef Maze_h
#define Maze_h

#include <cstdlib>
#include <iostream>

const int defaultSize = 64;

enum mazeType { Border = 7, Blocked = 1, Free = 0, Player = 9 };
enum Directions { Up = 0, Down, Left, Right };

class Maze {
public:
    Maze(int sz) {
        //std::cout << "Maze Constructor called";
        length = sz;
        fill();
        

    }
    
//getter functions
double getSize();
void displayEnumerated();
    
private:
    int length;
    int height;
    int mp[defaultSize][defaultSize];
    void fill();
    
};


#endif /* Maze_h */
