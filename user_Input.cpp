#include <bits/stdc++.h>
using namespace std;

int main() {
    string name, food, movie;

    cout << "Name: ";
    getline(cin, name);   // read full name safely

    cout << "Hello, " << name << "!" << endl;

    double age, height;
    cout << "Age: ";
    cin >> age;

    cout << "Height (in cm): ";
    cin >> height;

    cout << "You are " << age << " years old and " << height << " cm tall." << endl;

    cout << "Favorite Food: ";
    cin >> food;

    cout << "Favorite Movie: ";
    cin.ignore();         // remove leftover newline from "cin >> food"
    getline(cin, movie);   // read movie name

    cout << "Wow! " << food << " is delicious and " 
         << movie << " is a great movie!" << endl;

    return 0;
}
