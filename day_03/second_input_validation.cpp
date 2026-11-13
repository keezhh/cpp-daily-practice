#include <iostream>
using namespace std;

int main () {

    int x;
  
do {
    cout << "Enter your age: ";
    cin >> x;
    if (x < 1){
        cout << "Too low!\n";
    }
    else if (x > 120){
        cout <<"Too high!\n";
    }
} while (x < 1 || x > 120);

cout << "Age accepted: " << x;

    return 0;
}
