#include "Board.hpp"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            grid[i][j] = ' ';
}

void Board::printBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool Board::placeMove(int r, int c, char symbol) {
    if (r >= 0 && r < 3 && c >= 0 && c < 3 && grid[r][c] == ' ') {
        grid[r][c] = symbol;
        return true;
    }
    return false;
}

bool Board::checkWin(char s) {
    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == s && grid[i][1] == s && grid[i][2] == s) return true;
        if (grid[0][i] == s && grid[1][i] == s && grid[2][i] == s) return true;
    }
    if (grid[0][0] == s && grid[1][1] == s && grid[2][2] == s) return true;
    if (grid[0][2] == s && grid[1][1] == s && grid[2][0] == s) return true;
    return false;
}

bool Board::isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i][j] == ' ') return false;
    return true;
}
