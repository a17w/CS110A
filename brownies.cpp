#include <iostream>
using namespace std;

int main() {
  //Declare variables
  int length, width;
  int smallBrownies;
  int bigBrownies;

  //Get the pan dimensions
  cout << "Enter the baking pan length (in inches): " << endl;
  cin >> length;
  cout << "Enter the baking pan width (in inches): " << endl;
  cin >> width;

  //Compute and assign
  smallBrownies = (length * width)/1;  //determine how many small brownies pan can hold
  bigBrownies = ((length * width)/4);

  cout << "A " << length << " X " << width << " inch pan can hold " << smallBrownies << " small brownies " << "or " << bigBrownies << " large brownies." << endl;

  return 0;
}
