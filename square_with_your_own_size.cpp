#include <iostream>
using namespace std;

int main () {

    int size;

    do {

        cout << "Enter a size (1-10): ";
        cin >> size;
        if (size < 1 || size > 10){
            cout << "Invalid size!\n";
    }
    else {
        for (int i = 1; i <= size; i++){
            for (int j = 1; j <= size; j++){
                cout << "*";
            }
            cout << '\n';
        }
    }
    } while (size < 1 || size > 10);
    return 0;
}
