#include <iostream>
using namespace std;

int main()
{
    double current;

    // Repeat until current exceeds 10A
    while (true)
    {
        // Ask user for current reading
        cout << "Enter current (A): ";
        cin >> current;

        // Check if current exceeds limit
        if (current > 10)
        {
            cout << "Overcurrent detected! Monitoring stopped." << endl;
            break; // stop loop
        }

        // Display normal reading
        cout << "Current = " << current << " A (Safe)" << endl;
    }

    return 0;
}