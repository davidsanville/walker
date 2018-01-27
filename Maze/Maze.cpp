//
//  Maze.cpp
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#include <stdio.h>
#include "Maze.h"

//using namespace std;


double Maze::getSize() {
    return length;
}

void Maze::fill() {
    //pseduo-random filling
    int foo = getSize()-1;
    for( int i=0; i<getSize(); i++) {
        mp[0][i] = 7;
    }
    
    for( int i=1; i< getSize()-1; i++ ) {
        mp[i][0] = 7;
        for( int j=1; j< getSize()-1; j++ ) {
            mp[i][j] = rand() % 2; //not a great random function
        }
        //mp[i][9] = 7;
        mp[i][foo] =7;
    }
    
    for( int i=0; i<getSize(); i++) {
        int foo = getSize()-1;
        //mp[9][i] = 7;
        mp[foo][i] = 7;
    }
}


void Maze::displayEnumerated() {
    for( int i=0; i< getSize(); i++ ) {
        for( int j=0; j< getSize(); j++ ) {
            if(mp[i][j] == Border) {
                std::cout << '|';
            }
            if(mp[i][j] == Blocked) {
                std::cout << 'X';
            }
            if(mp[i][j] == Free) {
                std::cout << ' ';
            }
            if(mp[i][j] == Player) {
                std::cout << 'G';
            }
            
            //std::cout << mp[i][j];
        }
        std::cout <<'\n';
    }
}
