#include "Board.hpp"


#include <iostream>
#include <algorithm>


Board::Board() {
reset();
}


void Board::reset() {
for (auto& row : grid) {
row.fill(' ');
}
}


void Board::display() const {
std::cout << "\n 1 2 3\n";
for (int r = 0; r < 3; ++r) {
std::cout << " +---+---+---+\n";
std::cout << r + 1 << " | ";
for (int c = 0; c < 3; ++c) {
char ch = grid[r][c];
std::cout << (ch == ' ' ? ' ' : ch) << " | ";
}
std::cout << "\n";
}
std::cout << " +---+---+---+\n\n";
}


bool Board::isCellEmpty(int row, int col) const {
return row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ';
}


char Board::getCell(int row, int col) const {
if (row < 0 || row >= 3 || col < 0 || col >= 3) return '\0';
return grid[row][col];
}


bool Board::makeMove(int row, int col, char symbol) {
if (!isCellEmpty(row, col)) return false;
grid[row][col] = symbol;
return true;
}


bool Board::checkWin(char s) const {
// Linii și coloane
for (int i = 0; i < 3; ++i) {
if (grid[i][0] == s && grid[i][1] == s && grid[i][2] == s) return true;
if (grid[0][i] == s && grid[1][i] == s && grid[2][i] == s) return true;
}
// Diagonale
if (grid[0][0] == s && grid[1][1] == s && grid[2][2] == s) return true;
if (grid[0][2] == s && grid[1][1] == s && grid[2][0] == s) return true;
return false;
}


bool Board::isFull() const {
for (const auto& row : grid) {
for (char ch : row) {
if (ch == ' ') return false;
}
}
return true;
}