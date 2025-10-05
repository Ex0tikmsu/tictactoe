#pragma once

class Board {
private:
    char grid[3][3];

public:
    Board();                // constructor
    void printBoard();      // afișează tabla
    bool placeMove(int r, int c, char symbol); // face o mutare
    bool checkWin(char symbol); // verifică dacă cineva a câștigat
    bool isFull();          // verifică dacă tabla e plină
};
