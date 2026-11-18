#include <iostream>
using namespace std;

int main (){

    int ans;
    int score = 0;

        do {
            cout << "Q1: What is 2 + 2? (1: 3, 2: 4, 3: 5): ";
            cin >> ans;
            if (ans == 2){
                cout << "Correct!\n";
                ++score;
                }   
            else if (ans == 1 || ans == 3) {
                cout << "Wrong!\n";
                }
            else if (ans < 1 || ans > 3){
                cout << "Invalid answer!\n"; 
            }
        } while (ans < 1 || ans > 3); 

        do {
            cout << "Q2: What is 5 * 3? (1: 15, 2: 12, 3: 20): ";
            cin >> ans;
            if (ans == 1){
                cout << "Correct!\n";
                ++score;
                }   
            else if (ans == 2 || ans == 3) {
                cout << "Wrong!\n";
                }
            else if (ans < 1 || ans > 3){
                cout << "Invalid answer!\n"; 
            } 
        } while (ans < 1 || ans > 3); 
        do {
            cout << "Q3: What is 10 - 4? (1: 5, 2: 7, 3: 6): ";
            cin >> ans;
            if (ans == 3){
                cout << "Correct!\n";
                ++score;
                }   
            else if (ans == 1 || ans == 2) {
                cout << "Wrong!\n";
                }
            else if (ans < 1 || ans > 3){
                cout << "Invalid answer!\n"; 
            } 
        } while (ans < 1 || ans > 3); 

        cout << "Score: " << score << " / 3";

        
    return 0;
}
