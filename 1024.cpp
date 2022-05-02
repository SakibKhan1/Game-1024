//Name: Sakib Khan
//Prof: Tong Yi
//Assn: Game 1024
//Date: 5/1/2022

#include "Board.hpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>

Board::Board(){
    max = 0; target = 32;
    numRows = 3; numCols = 3;
    panel = new int*[numRows];
    for(unsigned int i = 0; i < numCols; i++)
        panel[i] = new int[numCols];
}

Board::Board(int m){
    max = 0; target = 32;
    if(m >= 1) { numRows = m; numCols = m; }
    else { numRows = 3; numCols = 3; }
    panel = new int*[numRows];
    for(unsigned int i = 0; i < numCols; i++)
        panel[i] = new int[numCols];
}

Board::Board(int m, int n){
    max = 0; target = 32;
    if(m >= 1 && n >= 1) { numRows = m; numCols = n; }
    else { numRows = 3; numCols = 3; }
    panel = new int*[numRows];
    for(unsigned int i = 0; i < numCols; i++)
        panel[i] = new int[numCols];
}

Board::~Board(){
    for(int i = 0; i < numRows; i++)
        delete [] panel[i];
    delete [] panel;
    panel = NULL;
}

void Board::print() const{
    for(unsigned int i = 0; i < numRows; i++){
        std::cout << '+';
        for(unsigned int j = 0; j < numCols; j++)
            std::cout << "----+";        
        std::cout << '\n';
        std::cout << '|';
        for(unsigned int j = 0; j < numCols; j++)
            std::cout << std::right <<std::setw(4) << ' ' << '|';
        std::cout << '\n';
    }
    std::cout << '+';
    for(unsigned int j = 0; j < numCols; j++)
        std::cout << "----+";
    std::cout << '\n';
}
