@echo off
echo ===== Construim proiectul TicTacToe =====
g++ src/*.cpp -I include -o tictactoe.exe
if %errorlevel% neq 0 (
    echo ❌ Compilare esuata!
    exit /b %errorlevel%
)
echo ✅ Compilare reusita! Executabil creat: tictactoe.exe
