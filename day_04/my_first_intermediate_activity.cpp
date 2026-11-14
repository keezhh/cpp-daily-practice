#include <iostream>
using namespace std;

int main () { 

    int choice;
    int a;
    int b;
    int result;

    do {
        cout << "1. Add\n2. Multiply\n3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1){
            cout << "Enter two numbers: ";
            cin >> a >> b;
            result = a + b;
            cout << "Result: " << result << '\n';
                                // or simple a + b
        }
        else if (choice == 2){
            cout << "Enter two number: ";
            cin >> a >> b;
            result = a * b;     // 
            cout << "Result: " << result << '\n';
        }
        else if (choice != 3 && choice != 2 && choice != 1){
            cout << "Invalid choice!\n";
        }
            
    } while (choice != 3 ); 

    cout << "Goodbye!"; 

    
   return 0;

}
