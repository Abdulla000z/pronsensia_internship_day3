#include <iostream>
using namespace std;

int main() {
    bool hasID;
    bool hasPermission;

    cout << "Do you have your ID? (1 = Yes, 0 = No): ";
    cin >> hasID;

    cout << "Do you have special permission? (1 = Yes, 0 = No): ";
    cin >> hasPermission;

    if (hasID || hasPermission) {
        cout << " You are allowed to enter.\n";
    } else {
        cout << " Entry denied. You need an ID or permission.\n";
    }

    return 0;
}
