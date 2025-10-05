# Tic-Tac-Toe

## Descrierea proiectului
Acesta este jocul clasic **Tic-Tac-Toe (X și 0)**, implementat în C++ folosind programare orientată pe obiecte.  
Proiectul permite doi jucători să se joace pe rând pe o tablă 3x3.

---

## Regulile jocului
1. Tabla este de 3x3 celule.  
2. Jucătorii aleg simbolurile `X` și `O` și fac mutări pe rând.  
3. Scopul este să aliniez 3 simboluri identice pe linie, coloană sau diagonală.  
4. Jocul se termină când unul dintre jucători câștigă sau când tabla este plină (egalitate).

---

## Tipuri de date noi

- `struct Player`  
  Reprezintă un jucător. Conține numele jucătorului și simbolul (`X` sau `O`).  

- `class Board`  
  Reprezintă tabla de joc. Gestionează mutările, verifică dacă o celulă este liberă, dacă tabla este plină și dacă cineva a câștigat.    

- `class GameEngine`  
  Gestionează logica principală a jocului: tururile jucătorilor, citirea mutărilor, verificarea câștigătorului și afișarea rezultatului final.

---

## Observații
Proiectul este structurat pe **OOP** pentru a separa clar responsabilitățile între jucători, tablă și motorul jocului, facilitând întreținerea și extinderea codului.

## Metoda de creatie
In cmd in fisierul local a jocului deschidem CMD , facem buildul prin comanda "build.cmd", dupa ce build e facut , scriem comanda tictactoe.exe, si jocul va rula