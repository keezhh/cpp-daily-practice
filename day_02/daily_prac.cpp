
#include <iostream>
using namespace std;

int main(){

    int count = 0;

        // for loop since i know the range
    for (int i = 0; i <= 50; i++){
                            // post increment
        if (i % 2 == 0){
            ++count;
            // pre increment - add 1 on the var everytime the condition is true

        }
    }   
    // print outside the loop to get the total
    cout << "Odd numbers: " << count; 

    return 0;
}