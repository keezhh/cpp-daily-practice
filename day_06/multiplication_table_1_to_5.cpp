#include <iostream>
using namespace std;

int main (){

    // outer loop: i is the row number, runs 5 times (rows 1 to 5)
    for (int i = 1; i <= 5; i++){    
        // inner loop: j is the column number, restarts at 1 on every row
        // it keeps running as long as j <= 5 is true, and stops when j becomes 6 
        for (int j = 1; j <= 5; j++){
            // each cell is row * column, followed by a space
            cout << i * j << " "; 
        }
         // runs once per row, after the inner loop finishes, to start a new line
       cout << '\n';
    }

    return 0;
}
