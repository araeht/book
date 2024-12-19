// This program below calculates the users pay based on the hours worked and the hourly rate.
#include <iostream>
using namespace std;

int main() {
    double hours, rate, pay;

    //Get the number of hours worked 
    cout << "Enter the number of hours worked: ";
    cin >> hours;

    //Get hourly rate

    cout << "Enter the hourly rate: ";
    cin >> rate;

    // Calculate the pay
    pay = hours * rate;

    // Display the pay
    cout << "The pay is: $" << pay << endl;
}