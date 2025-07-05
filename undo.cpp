//Problem Statement:
/* I'm building a simple text editor simulator that supports two operations:
Type Operation: Add a character to the end of the current string.
Undo Operation: Undo the last type operation and restore the previous state of the string.
I'm given op operations to perform. Implement a program to simulate these operations
and print the final state of the string after all operations are performed.*/



#include <iostream>
#include <stack>
using namespace std;

int main() {
    int op;
    cout << "Enter number of operations: ";
    cin >> op;

    stack<string> history;
    string current = "";
    history.push(current); // initial state

    for (int i = 0; i < op; i++) {
        int op;
        cout << "Enter operation (1 for type, 2 for undo): ";
        cin >> op;
        
        if (op == 1) {
            char ch;
            cout << "Enter character to add: ";
            cin >> ch;
            current += ch;
            history.push(current); // save state
        } else if (op == 2) {
            if (history.size() > 1) {
                history.pop();         // remove current state
                current = history.top(); // restore previous state
            }
        }
    }

    cout << "Final string: " << current << endl;
    return 0;
}
