// Lab 3 icecream.cpp
// This program displays a daily sales report for LIGHTful Ices Company
// Annie Wong
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  const double DELIGHTFUL = 1.49, // 1 scoop
                DOUBLEDELIGHT = 2.49, // 2 scoop
                TRIPLEDELIGHT = 3.49; // 3 scoop

int numberOfSingleConesSold,
    numberOfDoubleConesSold,
    numberOfTripleConesSold,
    totalNumberConesSold;

double totalSalesOfDelightful,
      totalSalesOfDoubleCones,
      totalSalesOfTripleCones,
      totalSalesOfAllConesSold;

cout << "Number of single scoop cones sold: ";
cin >> numberOfSingleConesSold;
cout << "Number of double scoop cones sold: ";
cin >> numberOfDoubleConesSold;
cout << "Number of triple scoop cones sold: ";
cin >> numberOfTripleConesSold;
cout << endl;

cout << setprecision(2) << fixed;
totalSalesOfDelightful = DELIGHTFUL * numberOfSingleConesSold;
totalSalesOfDoubleCones = DOUBLEDELIGHT * numberOfDoubleConesSold;
totalSalesOfTripleCones = TRIPLEDELIGHT * numberOfTripleConesSold;

cout << "DeLIGHTful cones" << right << setw(10) << numberOfSingleConesSold << setw(5) << "$" << right << setw(7) << totalSalesOfDelightful << endl;
cout << "Double DeLIGHT cones" << right << setw(6) << numberOfDoubleConesSold << setw(5) << "$" << right << setw(5) << totalSalesOfDoubleCones << endl;
cout << "Triple DeLIGHT cones" << right << setw(6) << numberOfTripleConesSold << setw(5) << "$" << right << setw(7) << totalSalesOfTripleCones << endl;

totalNumberConesSold = numberOfSingleConesSold + numberOfDoubleConesSold + numberOfTripleConesSold;
totalSalesOfAllConesSold = totalSalesOfDelightful + totalSalesOfDoubleCones + totalSalesOfTripleCones;

cout << "Total" << right << setw(21) << totalNumberConesSold << setw(5) << "$" << right << setw(5) << totalSalesOfAllConesSold << endl;
cout << endl;

        return 0;
}
