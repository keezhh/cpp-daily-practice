#include <iostream>
using namespace std;

int main(){

    double a;
    double b;
    int choice;
    double result;
    
    
  
    do {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Quit\n";
                
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()){
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (choice < 1 || choice > 5){
            cout << "Invalid input\n";
        }
            

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4){
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (cin.fail()){
                cout << "Invalid input!\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            else if (choice == 1){
                result = a + b;
                cout << "Result: " << result << '\n';
            }
            else if (choice == 2){
                result = a - b;
                cout << "Result: " << result << '\n';
            }
            else if (choice == 3){
                result = a * b;
                cout << "Result: " << result << '\n';
            }
            else if (choice == 4){
                if (b == 0){
                    cout << "Cannot divided by zero!\n";
                }
                else {
                    result = a / b;
                    cout << "Result: " << result << '\n';
                }
            }
        } 
        
    } while (choice != 5);

    cout << "Goodbye!";

    return 0;
}
