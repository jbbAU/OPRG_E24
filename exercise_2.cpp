#include <iostream>

/*
Implement a program that asks the user to input current( milliAmpere) and resistance(Ohm) 
Assume that the resistor is connected to a battery.
Write the voltage over the resistor in Volts and the dissipated effect in Watts to the output*/

using namespace std;

int main() {
    // Declare variables for current and resistance
    double currentMilliAmpere, resistanceOhm;
    
    // Ask the user for the current in milliAmperes
    cout << "Enter the current in milliAmperes (mA): ";
    cin >> currentMilliAmpere;

    // Ask the user for the resistance in Ohms
    cout << "Enter the resistance in Ohms (Ω): ";
    cin >> resistanceOhm;
    
    // Convert current from milliAmperes to Amperes
    double currentAmpere = currentMilliAmpere / 1000.0;
    
    // Calculate the voltage over the resistor using Ohm's law
    double voltage = currentAmpere * resistanceOhm;
    
    // Calculate the power dissipated in the resistor
    double power = voltage * currentAmpere;
    
    // Output the results
    cout << "The voltage over the resistor is: " << voltage << " Volts" << endl;
    cout << "The power dissipated by the resistor is: " << power << " Watts" << endl;
    
    return 0;
}
