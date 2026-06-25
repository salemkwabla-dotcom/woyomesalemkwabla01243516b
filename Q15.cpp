#include <iostream>
using namespace std;

int main()
{
    // Variable to store appliance power
    double power;

    // Stores total electrical load
    double totalLoad = 0;

    // Continue until load exceeds 3000W
    while (totalLoad <= 3000)
    {
        // Ask user for appliance power
        cout << "Enter appliance power (W): ";
        cin >> power;

        // Add appliance power to total
        totalLoad += power;

        // Show current total load
        cout << "Current Total Load = "
             << totalLoad
             << " W" << endl;
    }

    // Warning message
    cout << "\nLoad limit exceeded. Do not add more appliances" << endl;

    // Display final load
    cout << "Final Total Load = "
         << totalLoad
         << " W" << endl;

    return 0;
}