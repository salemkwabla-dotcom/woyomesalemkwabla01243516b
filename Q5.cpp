#include <iostream>
using namespace std;

int main() 
{
int choice;
float voltage, current, power, resistance, time, energy;

//Display menu
cout<<"POWER RATING MENU"<< endl;
cout<<"1. Calculate DC Power"<< endl;
cout<<"2. Calculate Resistance using ohms's Law'"<< endl;
cout<<"3. Calculate Energy Consumption"<< endl;

cout<<"Enter your choice"<< endl;
cin>>choice;

switch(choice)
{
	case 1:
		cout<<"Enter Voltage (V):";
		cin>>voltage;
		
		cout<<"Enter Current (A):";
		cin>> voltage;
		
		power = voltage * current;
		
		cout<<"Power = " << power << " W";
		break;
		
		case 2:
		cout<<"Enter Voltage (V):";
		cin>>voltage;
		
		cout<<"Enter Current (A):";
		cin>> voltage;
		
		resistance = voltage / current;
		
		cout<<"Resistance = " << resistance << " ohms";
		break;
		
		case 3:
		cout<<"Enter Power (W):";
		cin>> power;
		
		cout<<"Enter Time (h):";
		cin>> time;
		
		energy = voltage * current;
		
		cout<<"Energy = " << energy << " wh";
		break;
		
		default:
			cout<< "Invalid choice";
}

  
    return 0;
}