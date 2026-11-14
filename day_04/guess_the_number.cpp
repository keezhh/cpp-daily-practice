#include <iostream>
using namespace std;

int main () {

    const int secret = 7;
    int guess;
    int attempts = 0;

    do {
        cout << "Guess (1-10): ";
        cin >> guess;

        if (guess < 1 || guess > 10){
            cout << "Out of range!\n";
        }
        else {
            ++attempts;
            if (guess < secret){
                cout << "Too low!\n";
            }
            else if (guess > secret){
                cout << "Too high!\n";
            }
        }

    } while (guess != secret);

    cout << "Correct! Attempts: " << attempts;

   return 0;
    
}
