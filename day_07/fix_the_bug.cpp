// See what happens when a user types a letter instead of a number, and understand why.

#include <iostream>
using namespace std;

int main (){
    int num;
    do {
        cout << "Enter a number (1-10): ";
        cin >> num;
        // (cin.fail()) -   the input stream entered an error state because the user typed data that does not match the variable type your program expected
        if (cin.fail()){                    
            cout << "Invalid input!\n";
            cin.clear();                    // cin.clear()                      -   clear the failed state               
                    // ( sets the maximum number of characters to extract and discard,  specifies a stopping character, such as '\n')
            // cin.ignore(1000, '\n');         // cin.ignore(count, delimiter)     -   discards a single character from the input stream   
        }
        else if (num < 1 || num > 10){
            cout << "Invalid input!\n";
            cin.clear();
        }
        
    } while (num < 1 || num > 10);
    cout << "You entered: " << num;
    return 0;
}

// After cin fails, it does nothing at all, so num stays 0, so the condition num < 1 stays true, so the loop never ends.
