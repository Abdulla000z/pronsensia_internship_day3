#include <iostream>
using namespace std;

int main() {
    bool isBanned;

    cout << "Are you banned from applying? (1 = Yes, 0 = No): ";
    cin >> isBanned;

    if (!isBanned) {
        cout << " You are allowed to apply.\n";
    } else {
        cout << " Sorry, you are banned from applying.\n";
    }

    return 0;
}
