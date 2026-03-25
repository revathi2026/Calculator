int main() {
    int choice;
    double x, y;

    while(true) {
        cout << "\n1.sin 2.cos 3.tan 4.log 5.sqrt 6.pow 7.exit\n";
        cin >> choice;

        if(choice == 7) break;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> x;
                cout << sin(x);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> x;
                cout << cos(x);
                break;

            case 3:
                cout << "Enter value: ";
                cin >> x;
                cout << tan(x);
                break;

            case 4:
                cout << "Enter value: ";
                cin >> x;
                cout << log(x);
                break;

            case 5:
                cout << "Enter value: ";
                cin >> x;
                cout << sqrt(x);
                break;

            case 6:
                cout << "Enter base & power: ";
                cin >> x >> y;
                cout << pow(x, y);
                break;

            default:
                cout << "Invalid!";
        }
    }

    return 0; 
}