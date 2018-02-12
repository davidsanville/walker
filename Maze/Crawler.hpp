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
#include <stack>

const int genomeSize = 64;

class Crawler {
public:
    Crawler() {
        for (int i = 0; i < genomeSize; i++) { genomeArr[i] = rand() % 4; } //array filling upon construction
        //const int randfoo = rand() %4;
       // genomeStack.push(randfoo); //redundant stack filling
    }
    void walk(Maze&);
    void walk(int x,int y);
    int popWalkArr(); //just return top of genome stack
    //not required, for sandboxing
    void displayGenomeArr();
    
private:
    int genomeArr[genomeSize];
    std::stack<int> genomeStack();
};

#endif /* Crawler_hpp */




