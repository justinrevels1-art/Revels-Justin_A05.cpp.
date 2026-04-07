/*
***********************************************************************
Full Name:       Justin Revels
Course:          Intro to Programming 1
Assignment:      Assignment #07
Semester/Year:   Spring 2026
Date:            04/07/2026

Description: 
    This program compares a user's salary against a constant average 
    salary of $100,000 and displays the result.

Input: 
    - First Name (string)
    - Salary (double)

Processing: 
    - Comparison logic to check if salary is higher, lower, or equal 
      to the constant average.

Output: 
    - The name and the comparison result.
***********************************************************************
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Global Constant
const double AVG_SALARY = 100000.00;

// Function Prototype
void evaluateSalary(string name, double salary);

int main() {
    string firstName;
    double salary;

    // Formatting for currency
    cout << fixed << setprecision(2);

    // Input Section
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your annual salary: ";
    cin >> salary;

    // Logic Section (Modular call)
    evaluateSalary(firstName, salary);

    return 0;
}

void evaluateSalary(string name, double salary) {
    if (salary > AVG_SALARY) {
        cout << name << ", your salary is above the average ($100,000.00)." << endl;
    } else if (salary < AVG_SALARY) {
        cout << name << ", your salary is below the average ($100,000.00)." << endl;
    } else {
        cout << name << ", your salary is exactly the average ($100,000.00)." << endl;
    }
}
