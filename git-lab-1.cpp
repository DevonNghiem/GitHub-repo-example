#include <iostream>
#include <string>
using namespace std;

int main()
{
    // This program prompts the user for their name and age, then displays a greeting message.
    string name;
    int age;
    int ID;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your ID (4 digits): ";
    cin >> ID;

    cout << "Hello " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "Your ID is: " << ID << endl;

    return 0;
}