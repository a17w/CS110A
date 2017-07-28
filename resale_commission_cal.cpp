/*
 * Author:  Annie Wong
 * Email:   annie.hs.wong@gmail.com
 * Date:    2017-07-20
 * Class:   CS110A
 * Assignment: Final Project
 * Description: This program allows users to calculate commission across multiple marketplace platforms.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*****************Prototypes****************/

void displayMainMenu();

double askSellerForMarketPlace();

void promptForInteger(string, int &, int, int);

void createProducts(string [], int []);

void promptForDouble(string, double &, double, double);

//bool isNum(int);

//double calculateCommission(double, double);
//double sellerEarnings(double, double);
//void displayResults(double, double, double);


/*****************Main Function****************/
int main() {

//    double commissionRate = askSellerForMarketPlace();
//    if (commissionRate > -1) { //sentinel value
//        double price;
//        promptForDouble("Please enter a price", price, 0.01, DBL_MAX);
////        double commission = calculateCommission(price, commissionRate);
////        double earnings = sellerEarnings(price, commission);
////        displayResults(price, commission, earnings);
//    }

    string product_name[1]; // product_name array initialization, initializing array with 1 element
    int product_price[1]; // product_price array initialization, initializing array with 1 element
    createProducts(product_name, product_price);

    return 0;
}


/*****************Headers****************/
// Function to display menu options
void displayMainMenu() {
    cout << endl;
    cout << "............................ MENU ............................" << "\n";
    cout << "." << setw(61) << "." << "\n";
    cout << "." << setw(20) << "1. Mercari" << setw(25) << "3. Tradesy" << setw(16) << "." << "\n";
    cout << "." << setw(61) << "." << "\n";
    cout << "." << setw(21) << "2. Poshmark" << right << setw(29) << "4. Quit Program" << right << setw(11) << "." << "\n";
    cout << "." << setw(61) << "." << "\n";
    cout << ".............................................................." << "\n";
    cout << endl;
}

// Function to ask seller to choose marketplace
double askSellerForMarketPlace() {
//    displayMainMenu();
    int marketplaceNum;
    promptForInteger("Please choose a marketplace", marketplaceNum, 1, 4);

    switch (marketplaceNum) {
        case 1:
            return 0.10; // mercari
        case 2:
            return 0.20; // poshmark
        case 3:
            return 0.149; // tradesy
        case 4:
            return -1; // quit program
    }
    return -1;
}

// Function to prompt data type in integer
void promptForInteger(string prompt, int &choice, int low, int high) {
    cout << prompt << ": ";
    cin >> choice;

    if (choice < low) {
        cout << "Value is too low" << endl;
        promptForInteger(prompt, choice, low, high); // using recursion here, calling itself
    } else if (choice > high) {
        cout << "Value is too high" << endl;
        promptForInteger(prompt, choice, low, high); // using recursion here, calling itself
    }
}

//// Function to prompt data type in double
//void promptForDouble(string prompt, double &val, double low, double high) {
//    cout << prompt << ": ";
//    cin >> val;
//
//    if (val < low) {
//        cout << "Value is too low" << endl;
//        promptForDouble(prompt, val, low, high); // using recursion here, calling itself
//    } else if (val > high) {
//        cout << "Value is too high" << endl;
//        promptForDouble(prompt, val, low, high); // using recursion here, calling itself
//    }
//}


/*
// Function to calculate marketplace commission
double calculateCommission(double price, double commissionRate) {
    return price * commissionRate;
}


// Function to calculate seller earnings
double sellerEarnings(double price, double totalCommission) {
    return price - totalCommission;
}
*/

// Function to create two arrays: productName and productPrice
// This function takes in two empty arrays which will be filled at the end of the function
void createProducts(string productName[], int productPrice[]) {
    int productCount = 0, itemPrice = 0, totalSalesPrice = 0, totalCommissionAmount = 0, totalSalesEarnings = 0;
    double commissionRate = 0;
    string itemName;

    displayMainMenu();
    commissionRate = askSellerForMarketPlace();
    while (commissionRate > -1) {
        cout << "Please enter the number of products: ";
        cin >> productCount;

        while (productCount <= 0 && (!(cin >> productCount))) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a numeric value greater than 0" << endl;
            cout << "Number of products: ";
        }

        productName = new string[productCount]; // building new productName array
        productPrice = new int[productCount]; // building new productPrice array


        for (int i = 0; i < (productCount); i++) {
            cout << "Enter product name: ";
            cin >> itemName;
//            getline(cin, itemName);
//            cin.ignore();
            productName[i] = itemName; // stores new product name element
            cout << "Enter product price: $";
            cin >> itemPrice;


            while (itemPrice <= 0) {
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a numeric value greater than 0" << endl;
                cout << "Enter product price: $";
                cin >> itemPrice;
            }

            productPrice[i] = itemPrice; // stores new product price element
        }

        cout << endl;

        cout << "Item Name" << "\t\t\t\t\t\t" << "Item Price\n"
             << "--------------------------------------------------------------\n";
        for (int i = 0; i < (productCount); i++) {
            cout << setw(20) << left << productName[i] << "\t\t\t" << right << setw(3) << "$" << setw(6) << right << productPrice[i] << endl; // prints out parallel array
            totalSalesPrice = totalSalesPrice + productPrice[i];
        }

        totalCommissionAmount = totalSalesPrice * commissionRate;
        totalSalesEarnings = totalSalesPrice - totalCommissionAmount;

        cout << endl
             << endl
             << endl
             << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "TOTAL SALES:  " << "\t\t\t" << left << setw(3) << "$" << right << setw(6) << totalSalesPrice << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "TOTAL COMMISSION: " << "\t\t" << left << setw(3) << "$" << right << setw(6) << totalCommissionAmount
             << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "TOTAL EARNINGS: " << "\t\t" << left << setw(3) << "$" << right << setw(6) << totalSalesEarnings
             << endl;
        cout << "--------------------------------------------------------------" << endl;

        cout << endl
             << endl;
        displayMainMenu();
        commissionRate = askSellerForMarketPlace();

    }
}


// Function to create table and displays results
//void displayResults(double price, double totalCommission, double earnings) {
//    cout << endl;
//    cout << fixed << setprecision(2);
//    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
//    cout << "::" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t" << "SALES PRICE: " << "\t\t\t" << left << setw(3) << "$" << right << setw(9) << price << "\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t" << "COMMISSION AMOUNT: " << "\t\t" << left << setw(3) << "$" << right << setw(9) << totalCommission << "\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t" << "TOTAL EARNINGS: " << "\t\t" << left << setw(3) << "$" << right << setw(9) << earnings << "\t\t" << "::" << endl;
//    cout << "::" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "::" << endl;
//    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
//}


//bool isNum (int str) {
//    for (int i =0; 1 < str.length(); i++) {
//        if ((int)str[i] < 10) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//}

/******************************** TO DO LIST ********************************/
//product name input data validation
//product price input data validation
//product number cannot be negative num



/******************************** Unused code ********************************/

// cout << fixed << setprecision(2); // set number of decimal places

// cout << "Commission Amount: $" << totalCommission;

// promptForDouble("Please enter the price of your item", price, 0.01, DBL_MAX);

//cout << "Your total earnings is $" << earnings << "!";


/*while (price < 0) {
    cout << "Invalid input. The price of your item must be greater than $0.00. \n"; // Price validation
    cout << "Please re-enter the price of your item: $";
    cin >> price;
}*/
