#include <iostream>
#include <iomanip> // controls how output displays for numeric, string data
using namespace std;

int main()
{
  //Variables
  string name;
  int current_weight;
  double loss, original_weight;

  //Prompt the member for their name, original weight and pounds lost.
  cout << "What is the member\'s name? ";
  cin >> name;
  cout << "How much did you weight? ";
  cin >> original_weight;
  cout << "How many pounds have you lost? ";
  cin >> loss;

  //Variables
  double loss_percentage;
  cout << fixed << showpoint << setprecision(2);
  loss_percentage = (loss / original_weight) * 100;
  current_weight = original_weight - loss;

  cout << "The member " << name << " has lost " << loss_percentage << " %" << " of weight and now weighs " << current_weight << " pounds." << endl;

  return 0;
}
