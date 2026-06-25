#include <iostream>
using namespace std;

int main()
{
    int password = 2080;
    int enteredPassword;

    // Ask user for password
    cout << "Enter password: ";
    cin >> enteredPassword;

    // Keep asking until correct password
    while (enteredPassword != password)
    {
        cout << "Incorrect password. Try again: ";
        cin >> enteredPassword;
    }

    // Access granted
    cout << "Access granted to control panel." << endl;

    return 0;
}