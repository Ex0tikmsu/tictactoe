#ifndef PLAYER_HPP
#define PLAYER_HPP


#include <string>


struct Player {
std::string name;
char symbol; // 'X' sau 'O'


Player(const std::string& n, char s)
: name(n), symbol(s) {}
};


#endif // PLAYER_HPP