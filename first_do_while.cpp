#include <iostream>
using namespace std;

int main(){

    int i = 10;

    do { // always do
        cout << i << '\n';
        i++;
        
        // while is always outside of do
    }    while (i <= 5); // as long as it has true condition
    

    cout << "Finished!";
    return 0;
}
