// use of loop (do-while)
// conditional statement 

#include <iostream>
using namespace std;

int main () { 

    int choice;

    do {
        cout << "1. Say hello\n2. Say goodbye\n3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1){
            cout << "Hello!\n";
        }
        else if (choice == 2){
            cout << "Goodbye!\n";
        }
                // use of != 
        else if (choice != 3 && choice != 2 && choice != 1){
            cout << "Invalid choice!\n";
        }
            // keep looping as long as the choice is not 3
    } while (choice != 3 ); 

    // printed once, after the loop ends
    cout << "Program ended."; 
   return 0;

}
