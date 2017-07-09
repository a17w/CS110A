#include <iostream>
#include <fstream> //for file access
using namespace std;
int main() {
  ifstream inputFile; // define file stream objects
  int population; // defining variable in the "People.txt" file
  inputFile.open("People.txt"); // open the file named "People.txt" // this file must be in the same folder as the cpp file.

/*
  if (!inputFile) {               // testing for file open errors
  cout << "File open failure!";
}
cout << "Return";
*/

for (int year = 1900; year < 2000; year+=20)
{
  cout << year << ' '; // display years
  inputFile >> population;
  for (int i = 1; i <= population/1000; i++)
  {
    cout << '*'; // display asterick
  }
  cout << endl;
}

inputFile.close(); //Close the file
return 0;
}
