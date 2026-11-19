// same project of student grade validator


#include <iostream>
using namespace std;

int main (){

    int temp;
    int sum = 0;
    double ave = 0;
    int lowest = 0;
    bool bad;

    for (int n = 1; n <= 7; n++){
        do {
            bad = false;

            cout << "Day " << n << " temperature: ";

            cin >> temp;

            if (cin.fail()){
                cout << "Invalid temperature!\n";
                bad = true;
                cin.clear();
                cin.ignore(1000, '\n');
            }
            else if (temp < -10 || temp > 45){
                cout << "Invalid temperature!\n";
                bad = true;
            }
        } while (bad);

        sum += temp;
        ave = sum / 7.0;

        if (temp < lowest){
            lowest = temp;
        }
        
    }

    cout << "Average: " << ave << '\n';
    cout << "Lowest: " << lowest;

    return 0;
}
