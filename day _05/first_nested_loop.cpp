#include <iostream>
using namespace std;

int main () {

    for (int i = 1; i <= 3; i++){       // outer - round per row
        for (int j = 1; j <=5; j++){    // inner - star per row
            cout << "*";
        }
        cout << '\n';                   // runs ONCE per row, after 5 stars
    }
  return 0;    
}

