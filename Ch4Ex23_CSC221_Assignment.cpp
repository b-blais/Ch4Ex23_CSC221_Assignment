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
#include <iomanip>
#include <cstdlib>
using namespace std;

void displayMenu();
void selectMenu();
void circleArea();
void rectangleArea();
void triangleArea();
double checkNegative(double inputNumber);
bool makingEntries = 1;

int main()
{
    while (makingEntries == 1) {

        cout << "Welcome to the Geometry Calculator!\n" << endl;
        displayMenu();
        selectMenu();
        cout << "Please make another selection.\n" << endl;
    }
    return 0;
}

void displayMenu() {
    cout << "Please select one of the following menu items" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "To Calculate the area of a circle enter the number 1" << endl;
    cout << "To Calculate the area of a rectangle enter the number 2" << endl;
    cout << "To Calculate the area of a right triangle enter the number 3" << endl;
    cout << "To exit the program enter the number 4" << endl;
}
    
void selectMenu() {
    int userSelection;

    cin >> userSelection;
    while ((userSelection < 0) || userSelection > 4) {
        cout << "You have made an invalid entry, please try again.\n";
        cin.clear();
        cin >> userSelection;
    }
    switch (userSelection) {
    case 1:
        circleArea();
        break;
    case 2:
        circleArea();
        break;
    case 3:
        circleArea();
        break;
    case 4:
        cout << "Exiting the program.\n";
        exit(0);
    }
}
    
void circleArea() {
    const double PIE = 3.14;
    double circleRadius;

    cout << fixed;
    cout << "Please enter the radius for the circle:\n";
    cin >> circleRadius;
    checkNegative(circleRadius);
    cout << "The area of the cirle is: " << PIE * (pow(circleRadius, 2));
}

void rectangleArea() {
    double length;
    double width;
    
    cout << fixed;
    cout << "Please enter the length of the rectangle:\n";
    cin >> length;
    checkNegative(length);
    cout << "Please enter the width of the rectangle:\n";
    cin >> width;
    checkNegative(width);
    cout << "The area of the rectangle is: " << length * width << endl;
}

void triangleArea() {
    double base;
    double height;
    
    cout << fixed;
    cout << "Please enter the base of the right triangle:\n";
    cin >> base;
    checkNegative(base);
    cout << "Please enter the height of the right triagle:\n";
    cin >> height;
    checkNegative(height);
    cout << "The area of the right triangle is: " << base * height * .5 << endl;
}

double checkNegative(double inputNumber) {
    while ((inputNumber < 0)) {
        cout << "You have entered a negative number, please enter a positive number instead.\n";
        cin.clear();
        cin >> inputNumber;
        return inputNumber;
    }
    return inputNumber;
}
