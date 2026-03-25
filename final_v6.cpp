#include <iostream>
#include <cmath>
using namespace std;

// Basic
void basicCalc() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b;
}

// Scientific
void scientificCalc() {
    double x;
    cout << "Enter value: ";
    cin >> x;
    cout << "sqrt = " << sqrt(x);
}

// CGPA
void cgpaCalc() {
    int n;
    cout << "Subjects: ";
    cin >> n;

    float total = 0;
    char grade;

    for(int i = 0; i < n; i++) {
        cin >> grade;
        if(grade == 'A') total += 10;
        else if(grade == 'B') total += 8;
        else if(grade == 'C') total += 6;
        else if(grade == 'D') total += 4;
    }

    cout << "CGPA = " << total / n;
}

int main() {
    int choice;

    while(true) {
        cout << "\n1.Basic 2.Scientific 3.CGPA 4.Exit\n";
        cin >> choice;

        if(choice == 4) break;

        switch(choice) {
            case 1: basicCalc(); break;
            case 2: scientificCalc(); break;
            case 3: cgpaCalc(); break;
            default: cout << "Invalid!";
        }
    }
}