#include <iostream>
using namespace std;

int main()
 {
  int a = 5, b = 5,
      c = 3, d = 7;

  cout << a-- << ' ';
   cout << a   << ' ';
   cout << a-- << ' ' << a-- << ' ';
   cout << a-- << ' ' << a << endl;

   cout << ++b << ' ';
   cout << b   << ' ';
   cout << ++b << ' ' << ++b << ' ';
   cout << ++b << ' ' << b << endl;

   a = c++ * d--;
   cout << a << "  " << c << ' ' << d << endl;

   return 0;
 }
