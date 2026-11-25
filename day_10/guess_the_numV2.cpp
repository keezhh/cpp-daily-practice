#include <iostream>
using namespace std;

int main(){

    int const secretNum = 7;
    int num;
    int attemptUsed = 0;
    int attemptLeft = 5;
    int again;
    bool bad;

    cout << "===== GUESS THE NUMBER!!! =====\n";

    do {

        attemptUsed = 0;
        attemptLeft = 5;

        do {

            cout << "Enter the secret number: ";
            cin >> num;

            if (cin.fail()){
                cout << "Invalid guess!\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            else if (num < 1 || num > 10){
                cout << "Invalid guess!\n";

            }
            else if (num != secretNum){
                attemptUsed++;
                attemptLeft--;
                if (num < secretNum){
                    cout << "Too low!\n";
                    cout << "Attempts left: " << attemptLeft << '\n';
                }
                else {
                    cout << "Too high!\n";
                    cout << "Attempts left: " << attemptLeft << '\n';
                }
            }
        } while (num != secretNum && attemptUsed < 5);

        if (num == secretNum){
            attemptUsed++;
            cout << "You win in " << attemptUsed << " attempts!\n";
        }
        else {
            cout << "You lose! The number was 7.\n";
        }
        
        do {

            bad = false;

            cout << "Do you want to play again? (1 = yes, 2 = no) ";
            cin >> again;
            if(cin.fail()){
                cout << "Invalid!. Try again!\n";
                bad = true;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            else if (again < 1 || again > 2){
                cout << "Invalid!. Try again!\n";
                bad = true;
            }
            else if (again == 2){
                cout << "Thanks for playing!";
            }
        } while (bad);

    } while (again == 1);

   

    return 0;
}
