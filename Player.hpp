#pragma once
#include <string>
using namespace std;

struct Player {
    string name;
    char symbol; // 'X' sau 'O'

    Player(string n, char s); // constructor
};
