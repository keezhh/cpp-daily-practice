// This program should print the sum of all even numbers from 1 to 10. 
// The expected output is Sum: 30, because 2 + 4 + 6 + 8 + 10 = 30
// It has 2 bugs. It may not compile, and it may print the wrong thing.

#include <iostream>
using namespace std;

int main(){

    int sum = 0;

    for (int i = 1; i <= 10; i++){
        // if (i % 2 = 0){ '=' is for assigning not for comparison
        if (i % 2 == 0){
            sum += i;
            // cout << "Sum: " << sum << '\n';
            // this should be outside the loop
        }
    }

    cout << "Sum: " << sum << '\n';
    return 0;
}
