#include <iostream>
using namespace std;

int main()
{
    double temp;
    double sum = 0;
    int validCount = 0;

    // Accept 10 readings
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter temperature " << i << ": ";
        cin >> temp;

        // Ignore invalid readings
        if (temp < 0)
        {
            continue;
        }

        sum += temp;
        validCount++;
    }

    // Avoid division by zero
    if (validCount > 0)
    {
        double average = sum / validCount;

        cout << "Average Temperature = "
             << average
             << " °C" << endl;
    }
    else
    {
        cout << "No valid readings entered." << endl;
    }

    return 0;
}