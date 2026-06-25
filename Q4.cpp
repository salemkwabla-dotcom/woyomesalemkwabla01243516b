#include <iostream>
using namespace std;

int main() {
// Declare a variable to store the user's choice
 int choice;
 // Display the menu
 cout<<"Electrical Component Menu"<< endl;
 cout<<"1. Resistor"<< endl;
 cout<<"2.Capacitor"<< endl;
 cout<<"3. Diode"<< endl;
 cout<<"4. Transistor"<< endl;
 cout<<"5. LED"<< endl;    
 // ask the user to select an option
 cout << "Enter yoiur choice: ";
 cin >> choice;
 // Display the description using switch statement
 switch (choice)
 {
 	case 1:
 		cout << "Resistor: Used to limit current in a circuit."<< endl;
 		break;
    case 2:
 		cout << "Capacitor: Used to store electrical energy."<< endl;
 		break;
    case 3:
 		cout << "Diode: Allows current to flow in one direction."<< endl;
 		break;
	case 4:
 		cout << "Transistor: Used for switching and amplification."<< endl;
 		break;
    case 5:
 		cout << "LED: Emits light when current passes through it."<< endl;
 		break;	 		 
    default:
	cout << "Invalid selection."<<endl;		
 }
    return 0;
}