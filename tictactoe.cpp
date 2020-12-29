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

bool isTheGameOver(string cells[9]) {
  if (cells[0] == cells[1] && cells[0] == cells[2]) {
    system("clear");
    cout << "Player 1 is the winner!\n";
    return 1;
  } else {
    return 0;
  }

}

int main() {

  string cells[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
  int number;

  for (int i = 1; i < 9; i++) {
    if (i % 2 != 0) {
      displayTicTacToe(cells);
      cout << "Player 1: Choose a number for X ";
      cin >> number;
      cells[number - 1] = "X";
      system("clear");
      if (isTheGameOver(cells)) { break; }
    } else {
      displayTicTacToe(cells);
      cout << "Player 2: Choose a number for O ";
      cin >> number;
      cells[number - 1] = "O";
      system("clear");
      if (isTheGameOver(cells)) { break; }
    }
  }

  return 0;
}
