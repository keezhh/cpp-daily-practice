#include <iostream>
using namespace std;

int main () {

    int balance = 1000;
    int choice;
    int amount;

    do {
        cout << "1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1){
            cout << "Balance: " << balance << '\n';    
        }
        else if (choice == 2){
            cout << "Enter amount: ";
            cin >> amount;
                if (amount > 0){
                balance += amount;
                cout << "Deposited!\n";
                }
                else if (amount <= 0){
                    cout << "Invalid amount!\n";
                }   

        }
        else if (choice == 3){
            cout << "Enter amount: ";
            cin >> amount;
                if (amount <= 0){
                    cout << "Invalid amount!\n";
                }
                else if (balance < amount){
                    cout << "Insufficient funds!\n";
                }
                else{
                    cout << "Withdrawn!\n";
                    balance -= amount;
                }
        }
        else if (choice > 4 || choice <= 0){
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    cout << "Thank you!";


   return 0;
    
}
