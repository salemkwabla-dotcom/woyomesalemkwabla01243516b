#include <iostream>
using namespace std;

int main() {
// Declare a variable to store the voltage reading 
     float voltage;
     // Ask the user to enter the voltage
     cout<<" Enter voltage reading (V): ";
     cin>> voltage;
     // classify the voltage using if... else if ... else
     if (voltage < 0){
     	cout<<"Invalid voltage reading"<< endl;
	 }
	 else if(voltage <=50){
	 	cout<<"Low voltage ("<< voltage <<" V)."<< endl;
	 }
	 else if(voltage <=240 ){
	 	cout<<"Normal voltage("<< voltage <<"V)."<< endl;
	 	
	 }
	 else if(voltage <=450){
	 	cout<<"High voltage("<< voltage<<"V)."<<endl;
	 }
	 else
{
	cout<<"Dangerous voltage ("<< voltage<<"V)."<<endl;
	}    return 0;
}