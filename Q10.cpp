#include <iostream>
using namespace std;

int main()
{
    double voltage;

    // Read first voltage
    cout << "Enter battery voltage: ";
    cin >> voltage;

    // Continue while voltage is safe
    while (voltage >= 12)
    {
        cout << "Voltage = " << voltage << " V" << endl;

        // Read next voltage
        cout << "Enter battery voltage: ";
        cin >> voltage;
    }

    // Warning message
    cout << "Battery voltage low! Recharge required." << endl;

    return 0;
}