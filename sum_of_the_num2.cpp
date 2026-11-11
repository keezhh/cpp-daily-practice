#include <iostream>
using namespace std;

int main (){

    int sum = 0;
    int i = 0;

    while (i <= 10){
        sum += i;
        ++i; // add before assign
    }

    cout << "Total: " << sum;

    return 0;
}
