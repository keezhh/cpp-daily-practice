//  while loop

#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int count = 0;

    while (i <= 49){
        i++;
        if (i % 2 == 1){
            ++count;
        }
    }

    cout << "Odd numbers: " << count;

    return 0;
}
