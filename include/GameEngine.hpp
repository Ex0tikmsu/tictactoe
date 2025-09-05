#include <string>
#include "Board.hpp"
#include "Player.hpp"


enum class GameResult { InProgress, Won, Draw };


class GameEngine {
private:
Board board;
Player player1;
Player player2;
Player* currentPlayer;
GameResult state{GameResult::InProgress};
char winnerSymbol{' '};


bool processTurn(); // citește mutarea curentului jucător și actualizează starea
void promptAndReadMove(int& row, int& col) const; // citește input [1..3]
void announceResult() const;


public:
GameEngine(const std::string& name1, const std::string& name2);


void start(); // rulează bucla principală
void switchTurn(); // schimbă jucătorul curent
};


#endif // GAMEENGINE_HPP