#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  for (int i = 1; i < 10; i++) {
    cout << setw(4) << i ;
    if (i == 3 || i == 6) {
      cout << "\n";
    }
  }

  return 0;
}
