@echo off
echo ==== Building TicTacToe Project ====

:: Compilăm toate fișierele cpp în obiecte
g++ -c Board.cpp
g++ -c Player.cpp
g++ -c Game.cpp
g++ -c main.cpp

:: Legăm obiectele într-un executabil final
g++ Board.o Player.o Game.o main.o -o tictactoe.exe

echo ==== Build complete! ====
pause