// Lab 1.1


// greeting.cpp
// This program prints a message to greet the user.
#include <iostream>         // Needed to do C++ I/O
#include <string>           // Needed by some compilers to use strings
using namespace std;

int main ()
{
   string name;             // This declares a variable to
                             // hold the user's name
    cout << "Please enter your first name: "; // Get the user's name
    cin  >> name;


   cout << "Hello, " << name << "." << endl; // Print the greeting

   return 0;
  }
