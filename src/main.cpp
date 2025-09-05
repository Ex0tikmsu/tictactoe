#include "GameEngine.hpp"


#include <iostream>
#include <string>


int main() {
std::cout << "Introdu numele jucătorului 1 (X): ";
std::string n1; std::getline(std::cin, n1);
if (n1.empty()) n1 = "Jucator1";


std::cout << "Introdu numele jucătorului 2 (O): ";
std::string n2; std::getline(std::cin, n2);
if (n2.empty()) n2 = "Jucator2";


GameEngine engine(n1, n2);
engine.start();


std::cout << "\nMulțumim pentru joc!\n";
return 0;
}