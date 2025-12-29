/* Q: 10 teenagers want to know if they are allowed 
to drive a car. If they are above 18, they get the permit.
Write a C++ program to take input of their name and age.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    string name;

    for (int i = 0; i < 10; i++) {
        cout << "Enter Your Name: ";
        getline(cin, name);
        cout << "Enter Your Age: ";
        cin >> age;

        if (age >= 18) {
            cout << "Hello " << name << ", you are eligible to drive a car." << endl;
        } else {
            cout << "Hello " << name << ", you are not eligible to drive a car." << endl;
        }
        cin.ignore(); 
    }

    return 0;
}
