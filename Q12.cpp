#include <iostream>
using namespace std;

int main()
{
    int choice;
    double voltage, current, power, resistance, time, energy;

    do
    {
        // Display menu
        cout << "\nELECTRICAL CALCULATOR\n";
        cout << "1. Calculate Power\n";
        cout << "2. Calculate Resistance\n";
        cout << "3. Calculate Energy\n";
        cout << "4. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Calculate Power
                cout << "Enter Voltage: ";
                cin >> voltage;

                cout << "Enter Current: ";
                cin >> current;

                power = voltage * current;

                cout << "Power = " << power << " Watts\n";
                break;

            case 2:
                // Calculate Resistance
                cout << "Enter Voltage: ";
                cin >> voltage;

                cout << "Enter Current: ";
                cin >> current;

                resistance = voltage / current;

                cout << "Resistance = "
                     << resistance
                     << " Ohms\n";
                break;

            case 3:
                // Calculate Energy
                cout << "Enter Power: ";
                cin >> power;

                cout << "Enter Time: ";
                cin >> time;

                energy = power * time;

                cout << "Energy = "
                     << energy
                     << " Joules\n";
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
