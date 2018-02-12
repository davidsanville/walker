//
//  Crawler.cpp
//  Maze
//
//  Created by David Sanville on 1/26/18.
//  Copyright © 2018 David Sanville. All rights reserved.
//

#include "Crawler.hpp"

int Crawler::popWalkArr() {
    
  int i = 0;
    while ( i < genomeSize) {
        std::cout << genomeArr[i];
        //int direc = genomeArr[i];
       // if(isValidMove(int x, int y, int direc)) { std::cout << "made it to if" << std::endl;}
        i++;
        
    }
    
    return i;
}

/*

void Crawler::walk(int x,int y) {
    //take next bp off genome stack
    //move(pos)
    //update current position
    //recurse until solved (base case), or stuck, or solved
}

*/


void Crawler::displayGenomeArr () {
    for (int i = 0; i < genomeSize; i++) { std::cout << genomeArr[i] << '\n'; }
}
