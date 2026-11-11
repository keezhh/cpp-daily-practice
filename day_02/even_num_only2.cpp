-- // using while loop

#include <iostream>
using namespace std;

int main(){

    int i = 0;

        // while (condition) {what will happen as long as the condition is true, and stops when it becomes false.}
    while (i <= 19){
        i++; 
        if (i % 2 == 0){
            cout << i << '\n';
        }
    }

    return 0;
}
