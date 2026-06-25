#include <iostream>
using namespace std;

int main()
{
    double voltage;

    // Accept maximum 10 readings
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter voltage reading " << i << ": ";
        cin >> voltage;

        // Stop if battery is low
        if (voltage < 10.5)
        {
            cout << "Low Battery Detected!" << endl;
            break;
        }

        cout << "Battery Normal" << endl;
    }

    return 0;
}