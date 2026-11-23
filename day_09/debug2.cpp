// DEBUGGING PRACTICE

#include <iostream>
using namespace std;

int main(){

    int num;
    // int lowest = 0;      for the lowest, the starting value should be the highest value
    int lowest = 100;
    int i = 1;

    while (i <= 5){
        cout << "Number " << i << ": "; 
        cin >> num;
        i++;
        if (num < lowest){     // change the format of if
            lowest = num;
        }
    }

    cout << "Lowest: " << lowest;
    return 0;
}
