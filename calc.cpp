#include <iostream>
using namespace std;

int main() {
    char choice;
    double num1, num2;

    do {
        cout << "Options:" << endl;
        cout << "Enter '+' for addition" << endl;
        cout << "Enter '-' for subtraction" << endl;
        cout << "Enter '*' for multiplication" << endl;
        cout << "Enter '/' for division" << endl;
        cout << "Enter 'q' to quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'q') {
            break; // Exit the loop if 'q' is chosen
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 'q');

    cout << "Calculator program is closing. Goodbye!" << endl;
    return 0;
}
