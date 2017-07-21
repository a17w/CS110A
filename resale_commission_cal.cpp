/*
 * Author:  Annie Wong
 * Email:   annie.hs.wong@gmail.com
 * Date:    2017-07-20
 * Class:   CS110A
 * Assignment: Final Project
 * Description: Allows the user to calculate multiple products across multiple resale websites.
 */

#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
void displayMainMenu();

void userInput();

int main() {

    displayMainMenu();
    userInput();


    return 0;
}

// Function to Display Main Menu
void displayMainMenu() {
    cout << setw(70) << "+++++++++++++++++++++++++ MENU +++++++++++++++++++++++++\n";
    cout << setw(14) << "+" << setw(56) << "+\n";
    cout << setw(14) << "+" << setw(20) << "1. Ebay" << setw(25) << "4. Poshmark" << setw(11) << "+\n";
    cout << setw(14) << "+" << setw(56) << "+\n";
    cout << setw(14) << "+" << setw(20) << "2. Etsy" << setw(25) << "5. Tradesy" << setw(11) << "+\n";
//    cout << setw(30) << "2. Etsy" << setw(24) << "5. Tradesy\n";
    cout << setw(14) << "+" << setw(56) << "+\n";
    cout << setw(14) << "+" << setw(23) << "3. Mercari" << setw(22) << "6. Quit Program" << setw(11) << "+\n";
//    cout << setw(33) << "3. Mercari" << setw(18) << "6. Exit\n";
    cout << setw(14) << "+" << setw(56) << "+\n";
    cout << setw(14) << "+" << setw(56) << "+\n";
    cout << setw(70) << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << endl;
}

// Function for User Input
void userInput() {
    int choice;
    do {
        cout << setw(30) << "Please enter a number from the menu option to proceed: ";
        cin >> choice;
        if (choice == 1) {
            cout << "add function for ebay calculator here";
        } else if (choice == 2) {
            cout << "add function for etsy calculator here";
        } else if (choice == 3) {
            cout << "add function for mercari calculator here";
        } else if (choice == 4) {
            cout << "add function for poshmark calculator here";
        } else if (choice == 5) {
            cout << "add function for tradesy calculator here";
        } else cout << (choice == 6 ? "Exiting Program"
                                    : "ERROR! Invalid input - please enter a number between 1-6.\n");
    }
        while (choice < 1 || choice > 6);
}


// Function for Ebay Calculator

// Function for Mercari Calculator

// Function for Tradesy Calculator

// Function for Poshmark Calculator

// Function for Etsy Calculator

// Function to Return Back to Main Menu
