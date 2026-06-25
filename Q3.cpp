#include <iostream>
using namespace std;

int main() {
 // Declare a variable to store GPA
  float gpa;
  // Ask the user to enter GPA
  cout << "Enter your GPA: ";
  cin >> gpa;
// Check scholarship eligibility

if (gpa >= 3.5)
 {
 	cout << "Eligible for engineering scholarship."<< endl;
 }
 else
 {
 	cout << "Not eligible for engineering scholarship."<< endl;
 }
    return 0;
}