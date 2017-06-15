/*
#include <iostream>         // Needed to do C++ I/O
#include <string>           // Needed by some compilers to use strings
using namespace std;

int main ()
{
double item1, item2, item3, item4, item5;
double subtotal, salesTax, total;
const double SALESTAXRATE = 0.06; // const must be capitalized

//specify costs
item1 = 12.95;
item2 = 24.95;
item3 = 6.95;
item4 = 14.95;
item5 = 3.95;

subtotal = item1 + item2 + item3 + item4 + item5;
salesTax = subtotal * SALESTAXRATE;
total = subtotal + salesTax;

cout << total << endl;

return 0;
}

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
double item1, item2, item3, item4, item5;
double subtotal, salesTax, total;
const double SALESTAXRATE = 0.06; // const must be capitalized

cout << "What is the price of item 1?" << endl;
cin >> item1;
cout << "What is the price of item 2?" << endl;
cin >> item2;
cout << "What is the price of item 3?" << endl;
cin >> item3;
cout << "What is the price of item 4?" << endl;
cin >> item4;
cout << "What is the price of item 5?" << endl;
cin >> item5;

subtotal = item1 + item2 + item3 + item4 + item5;
salesTax = subtotal * SALESTAXRATE;
total = subtotal + salesTax;

cout << "The total is " << total << endl;

  return 0;
}
