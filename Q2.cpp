#include <iostream>
using namespace std;
int main() {
// Declare variables for the rated and measured currents
float ratedCurrent, measuredCurrent;

// Accept the rated current from the user
cout << "Enter rated current (A): ";
cin >> ratedCurrent;
//Accept the measured current from the user
cout << "Enter measured current (A): ";
cin >> measuredCurrent;
// Compare the currents using if...else
if (measuredCurrent > ratedCurrent){
	// Display safe limit message
	cout << "Overload detected. Circuit breaker should trip."<< endl;
}
 else{
 	// Display safe limit message
 	cout << "Current is within safe limit."<< endl;
 }
    return 0;
}