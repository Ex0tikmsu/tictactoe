#include "GameEngine.hpp"
#include <iostream>
#include <limits>


void GameEngine::switchTurn() {
currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
}


bool GameEngine::processTurn() {
std::cout << currentPlayer->name << " (" << currentPlayer->symbol << ") — alege rând și coloană [1..3]:\n";


int r = -1, c = -1;
promptAndReadMove(r, c);


// Convertim la index 0-based
r -= 1; c -= 1;


if (!board.makeMove(r, c, currentPlayer->symbol)) {
std::cout << "Mutare invalidă (ocupat sau în afara tablei). Încearcă din nou.\n";
return false; // nu schimbăm jucătorul, reluăm turul
}


board.display();


if (board.checkWin(currentPlayer->symbol)) {
state = GameResult::Won;
winnerSymbol = currentPlayer->symbol;
return true;
}
if (board.isFull()) {
state = GameResult::Draw;
return true;
}


return false;
}


void GameEngine::promptAndReadMove(int& row, int& col) const {
while (true) {
std::cout << "rând = ";
if (!(std::cin >> row)) {
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cout << "Input invalid. Introdu un număr între 1 și 3.\n";
continue;
}
std::cout << "coloană = ";
if (!(std::cin >> col)) {
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cout << "Input invalid. Introdu un număr între 1 și 3.\n";
continue;
}
if (row >= 1 && row <= 3 && col >= 1 && col <= 3) {
break;
}
std::cout << "Coordonate în afara intervalului. Folosește valori între 1 și 3.\n";
}
}


void GameEngine::announceResult() const {
if (state == GameResult::Won) {
std::string winnerName = (winnerSymbol == player1.symbol) ? player1.name : player2.name;
std::cout << "\n>>> Câștigător: " << winnerName << " (" << winnerSymbol << ")! Felicitări!\n";
} else if (state == GameResult::Draw) {
std::cout << "\n>>> Egalitate! Nu mai sunt mutări posibile.\n";
}
}