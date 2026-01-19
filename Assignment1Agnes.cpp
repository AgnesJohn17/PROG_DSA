#include <iostream>
#include <cmath> 

using namespace std;

// Function to calculate sin(2*theta)
double f(double theta) {
    return sin(2 * theta);
}

// Function to calculate log(theta)
double g(double theta) {
    return log(theta);
}

// Function to display a row 
void Display(double theta, double sin2theta, double logtheta, bool valid) {
    if (valid) {
        cout << theta << "\t" << sin2theta << "\t" << logtheta << endl;
    } else {
        cout << theta << "\t" << sin2theta << "\t" << "undefined" << endl;
    }
}

//main program
int main() {
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        double theta_lower, theta_higher;
        int number;

        // To Get user input
        cout << "Enter lower value of theta: ";
        cin >> theta_lower;
        cout << "Enter upper value of theta: ";
        cin >> theta_higher;
        cout << "Enter number of equally spaced theta values: ";
        cin >> number;

        double logic = (theta_higher - theta_lower) / (number - 1);

        // To Print table header
        cout << "Theta\tSin(2*Theta)\tLog(Theta)" << endl;

        // Loop 
        for (int i = 0; i < number; i++) {
            double theta = theta_lower + i * logic;
            double sin2theta = f(theta);
            bool validLog = theta > 0;
            double logtheta = validLog ? g(theta) : 0;

            Display(theta, sin2theta, logtheta, validLog);
        }

        // User input for repeatation or exit
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> repeat;
    }
    return 0;
}   