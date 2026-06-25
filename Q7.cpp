#include <iostream>
using namespace std;

int main() {
    float voltage, totalVoltage = 0, average;
    
    for (int i = 1; i <= 10; i++) {
    	cout<< "Enter voltage reading " << i << ":";
    	
    	totalVoltage += voltage;
	}
	average = totalVoltage / 10;
	cout << "Average Voltage ="
	     << average << " V" << endl;

    return 0;
} 