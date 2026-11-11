
#include <iostream>
using namespace std;

int main(){

    // for loop since range is given
    for (int i = 1; i <= 20; i++){ 
                // == is for comparison not assignment
        if (i % 2 == 0){
            cout << i << '\n';

        }
    }

    return 0;
}