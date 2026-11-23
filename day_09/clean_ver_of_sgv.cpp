#include <iostream>
using namespace std;

int main (){

 int grade;
 bool bad;

 int sum = 0;
 double average = 0;

 int highest =  0;

    for (int q = 1; q <= 5; q++){
        do {
            bad = false;

            cout << "Student " << q << " grade: ";
            
            cin >> grade;
            

            if (cin.fail()){
                cout << "Invalid grade!\n";
                bad = true;
                cin.clear();
                cin.ignore(1000, '\n');
        
            }
            else if (grade < 0 || grade > 100){
                cout << "Invalid grade!\n";
                bad = true;
            }
        
        } while (bad);

        sum += grade;

        if (grade > highest){
            highest = grade;
        }
    }
    average = sum / 5.0;
    cout << "Average: " << average << '\n';
    cout << "Highest: " << highest;
    return 0;
}
