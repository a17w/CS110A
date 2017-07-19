#include <iostream>
#include <cmath>

using namespace std;

//prototypes
double areaOfCircle(double radius);

void askAreaOfCircle();

double areaOfRectangle(double length, double width);

void askAreaOfRectangle();

double areaOfTriangle(double base, double height);

void askAreaOfTriangle();

void quitProgram();

const double PI = 3.14159; //constant

int main() {

    int choice;
    double area;

//menu
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;

//    cout << "Please enter a number: ";
//    cin >> choice;


    do {
        cout << "Please enter a number: ";
        cin >> choice;
        if (choice == 1) {
            askAreaOfCircle();
        } else if (choice == 2) {
            askAreaOfRectangle();
        } else if (choice == 3) {
            askAreaOfTriangle();
        } else if (choice == 4) {
            quitProgram();
        } else {
            cout << "Invalid input. Please enter a number between 1 to 4" << endl;
        }
    } while (choice < 1 || choice > 5 );

        return 0;
}


//input for circle
    void askAreaOfCircle() {
        double r, area;
        cout << "Please enter the radius: ";
        cin >> r;
        while (r < 0.0) {
            cout << "Invalid input. The value of radius must be greater than 0. \n";
            cout << "Please enter the radius: ";
            cin >> r;
        }
        area = areaOfCircle(r);
        cout << "The area of the circle is " << area << "." << endl;

    }

//calculate area of circle
    double areaOfCircle(double r) {
        return PI * r * r;
    }

// input for rectangle
    void askAreaOfRectangle() {
        double area, length, width;
        cout << "Please enter the length: ";
        cin >> length;
        cout << "Please enter the width: ";
        cin >> width;
        while (length < 0 || width < 0) {
            cout << "Invalid input. The values of length and width must be greater than 0. \n";
            cout << "Please enter length: ";
            cin >> length;
            cout << "Please enter width: ";
            cin >> width;
        }
        area = areaOfRectangle(length, width);
        cout << "The area of the rectangle is " << area << "." << endl;
    }

//calculate area of rectangle
    double areaOfRectangle(double length, double width) {
        return length * width;
    }

//input for triangle
    void askAreaOfTriangle() {
        double area, base, height;
        cout << "Please enter the base: ";
        cin >> base;
        cout << "Please enter the height: ";
        cin >> height;
        while (base < 0 || height < 0) {
            cout << "Invalid input. The values of base and height must be greater than 0. \n";
            cout << "Please enter base: ";
            cin >> base;
            cout << "Please enter height: ";
            cin >> height;
        }
        area = areaOfTriangle(base, height);
        cout << "The area of the triangle is " << area << "." << endl;

    }

//calculate area of triangle
    double areaOfTriangle(double base, double height) {
        return base * height * .5;
    }

//quit program
    void quitProgram() {
    cout << "Quit program";
}
