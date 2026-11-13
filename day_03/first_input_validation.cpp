#include <iostream>
using namespace std;

int main () {

    int x;
  

    do {  
        cout << "Enter a number (1-10): ";
        cin >> x;
        if (x < 1 || x > 10){
            cout << "Invalid! Try again.\n";
        }
    } while (x < 1 || x > 10); // loop repeats only while the input is invalid.

    cout << "You entered: " << x << '\n'; // loop stop after a valid input
    

    return 0;
}
