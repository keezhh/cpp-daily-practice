// for loop

#include <iostream>
using namespace std;

int main () {

    int sum = 0;
    int count = 0;

    for(int i = 1; i <= 30; i++){
        if (i % 3 == 0){
            ++count; // adds 1
            sum += i; // adds the number itself
        }
    }

    cout << "Count: " << count << '\n';
    cout << "Sum: " << sum;

    return 0;

}    
