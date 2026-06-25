#include <iostream>
using namespace std;

int main() {
    float resistor, totalResistance = 0;
    
    for(int i = 1 ; i <=5; i++) {
	cout<<"Enter resistor"<< i << "value (ohms):";
	cin>> resistor;
	
	totalResistance += resistor;
    }
    cout<<"Total Resistance ="
        <<totalResistance
        << "ohms"<< endl;
        

    return 0;
}