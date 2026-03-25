#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    while(true) {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 5) break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch(choice) {
            case 1: cout << "Result = " << a + b; break;
            case 2: cout << "Result = " << a - b; break;
            case 3: cout << "Result = " << a * b; break;
            case 4:
                if(b != 0) cout << "Result = " << a / b;
                else cout << "Error!";
                break;
            default:
                cout << "Invalid choice!";
        }
    }

    return 0;
}