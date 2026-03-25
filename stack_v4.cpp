#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if(b == 0) {
                cout << "Error: Division by zero!\n";
                return 0;
            }
            return a / b;
    }
    return 0;
}

int evaluate(string s) {
    stack<int> values;
    stack<char> ops;

    for(int i = 0; i < s.length(); i++) {

        // Skip spaces
        if(s[i] == ' ') continue;

        // Number
        if(isdigit(s[i])) {
            int val = 0;
            while(i < s.length() && isdigit(s[i])) {
                val = val * 10 + (s[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        }

        // Operator
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            while(!ops.empty() && precedence(ops.top()) >= precedence(s[i])) {

                if(values.size() < 2) {
                    cout << "Invalid Expression!\n";
                    return 0;
                }

                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();

                values.push(applyOp(a, b, op));
            }
            ops.push(s[i]);
        }

        else {
            cout << "Invalid character detected!\n";
            return 0;
        }
    }

    while(!ops.empty()) {
        if(values.size() < 2) {
            cout << "Invalid Expression!\n";
            return 0;
        }

        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = ops.top(); ops.pop();

        values.push(applyOp(a, b, op));
    }

    return values.top();
}

int main() {
    string expr;
    cout << "Enter expression: ";
    getline(cin, expr);   // supports spaces

    cout << "Result = " << evaluate(expr);

    return 0;
}