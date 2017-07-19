#include <iostream>

using namespace std;

void pass_by_ref(int &num){
  cout << "By Ref: " << "value before: " << num <<endl;
  num = 20;
  cout << "By Ref: " << "value after: " << num <<endl;
}

void pass_by_value(int num){
  cout << "By Val: " << "value before: " << num <<endl;
  num = 10;
  cout << "By Val: " << "value after: " << num <<endl;
}

int main(){

  int value = 0;
  int reference = 0;
  cout << "Pass by value " << value << endl;
  pass_by_value(value);
  cout << "Pass by value after function " << value << endl;

  cout << "Pass by reference " << reference << endl;
  pass_by_ref(reference);
  cout << "Pass by reference after function " << reference << endl;

  return 0;
}
