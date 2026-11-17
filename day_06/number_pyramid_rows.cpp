#include <iostream>
using namespace std;

int main (){

    for (int i = 1; i <= 5; i++){           // print i get the same digit repeated.
        for (int j = 1; j <= i; j++){       // print j get a counting sequence
            cout << j;                      

        }
        cout << '\n';
    }
    
    return 0;
}
