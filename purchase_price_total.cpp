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
