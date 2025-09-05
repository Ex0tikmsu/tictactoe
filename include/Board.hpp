#ifndef BOARD_HPP
#define BOARD_HPP


#include <array>


class Board {
private:
std::array<std::array<char, 3>, 3> grid{}; // inițializat cu '\0'


public:
Board();


void reset();
void display() const; // imprimă tabla în consolă


// returnează true dacă mutarea a fost efectuată (r, c în [0..2] și celula liberă)
bool makeMove(int row, int col, char symbol);


bool checkWin(char symbol) const; // verifică linii, coloane, diagonale
bool isFull() const; // adevărat dacă nu mai sunt celule libere


bool isCellEmpty(int row, int col) const;
char getCell(int row, int col) const;
};


#endif // BOARD_HPP