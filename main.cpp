#include <iostream>
#include <limits>

using namespace std;

int enter(string value) {
    int input;

    while (true) {
        cout << "Enter " << value << " number: ";
        cin >> input;

        if (cin.fail()) {
            cout << "Please enter the valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else
            break;

    }
    return input;
}

int main() {
    int input;
    int num1 = enter("First");
    int num2 = enter("Second");
    cout << num1 + num2 << endl;
    return 0;


}