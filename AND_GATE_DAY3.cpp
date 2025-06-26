#include <iostream>
using namespace std;

int main() {
    int age;
    float cgpa;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    if (age >= 18 && cgpa >= 2.5) {
        cout << " You are eligible to apply.\n";
    } else {
        cout << " You do not meet both criteria (age and CGPA).\n";
    }

    return 0;
}
