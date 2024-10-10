/*
Title: Chapter 4 Exercise 23 - Geometry Calculator
File Name : Ch4Ex23_CSC221_Assignment
Programmer : Brion Blais
Date : 10 / 2024
Requirements :

    Write a program that displays a menu with four options: Calculate the Area of a Circle, Retangle, Triangle and quit.
    If the user enters 1 then the program should ask for the radius of the circle and use area = pie R squared.
    If the user enters 2 then the program should ask for the length and width of the retangle and return the area with length * width.
    If the user enters 3 then the program should ask for the triangles base and height and return the area with base * height * .5
    If the user enters 4 then the program should end.

    Display an error message if the user enters a number outside of 1 - 4 and do not except negative values for any of the geometry calculations.

 */

#include <iostream>
using namespace std;

int main()
{
    const double PIE = 3.14;
    int userSelection;
    double circleRadius;
    
    cout << "display the menu";

    cin >> userSelection;

    while ((userSelection < 0) || userSelection > 4) {
        cout << "You have made an invalid entry, please try again.\n";
        cin.clear();
        cin >> userSelection;
    }

    if (userSelection == 1) {
        cout << "Please enter the radius for the circle:\n";
        cin >> circleRadius;
        cout << "The area of the cirle is: " << PIE * (pow(circleRadius, 2));

    }

    return 0;
}
