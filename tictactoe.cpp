#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayTicTacToe(string cells[9]) {
  cout << "\n";
  for (int i = 0; i < 9; i++) {
    cout << setw(5) << cells[i];
    if (i == 2 || i == 5 || i == 8) {
      cout << "\n\n";
    }
  }
}

bool isTheGameOver(string cells[9], int playerNum) {
  if (cells[0] == cells[1] && cells[0] == cells[2] ||
      cells[3] == cells[4] && cells[3] == cells[5] ||
      cells[6] == cells[7] && cells[6] == cells[8] ||

      cells[0] == cells[3] && cells[0] == cells[6] ||
      cells[1] == cells[4] && cells[1] == cells[7] ||
      cells[2] == cells[5] && cells[2] == cells[8] ||

      cells[0] == cells[4] && cells[0] == cells[8] ||
      cells[2] == cells[4] && cells[2] == cells[6]
  ) {
    system("clear");
    displayTicTacToe(cells);
    cout << "Player " << playerNum << " is the winner!\n\n";
    return 1;
  }

  return 0;
}

int main() {
  char playAgain;

  do {
  string cells[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
  int number;

  for (int i = 1; i < 255168; i++) {
    if (i % 2 != 0) {
      displayTicTacToe(cells);
      cout << "Player 1: Choose a number for X ";
      cin >> number;
      cells[number - 1] = "X";
      system("clear");
      if (isTheGameOver(cells, 1)) { break; }
    } else {
      displayTicTacToe(cells);
      cout << "Player 2: Choose a number for O ";
      cin >> number;
      cells[number - 1] = "O";
      system("clear");
      if (isTheGameOver(cells, 2)) { break; }
    }
  }

  // asking if you want to play again
    cout << "Play again?[y/n]: ";
    cin >> playAgain;
  } while (toupper(playAgain) == 'Y');

  return 0;
}
