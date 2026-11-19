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

            if (q == 1){
                cout << "Student 1 grade: ";
            }
            else if (q == 2){
                cout << "Student 2 grade: ";
            }
            else if (q == 3){
                cout << "Student 3 grade: ";
            }
            else if (q == 4){
                cout << "Student 4 grade: ";
            }
            else {
                cout << "Student 5 grade: ";
            }

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
        average = sum / 5.0;

        if (grade > highest){
            highest = grade;
        }
    }
    cout << "Average: " << average << '\n';
    cout << "Highest: " << highest;
    return 0;
}
