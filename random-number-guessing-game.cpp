/* This random number guessing game assignment goes here.

Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is. If the user's guess is higher than the random number, the program should display "Too high. Try Again". IF the user's guess is lower than the random number, the program should display "Too low. Try again." The program should use a loop that repeats until the user correctly guesses the random number. Then the program should display "Congratulations! You figured out my number!"

*/
#include <iostream>
#include <cstdlib> // cstdlib library is required in order to use rand() function.
#include <ctime> // Needed for the true randomization

using namespace std;

int main() {
  srand(time(0));
  int randomNumber;
  randomNumber = rand() % 100 + 1;
  int guess;
  do {
    cout << "Enter your guess: ";
    cin >> guess;
    if (guess > randomNumber)
    cout << "Too high. Try Again." << endl;
    else if (guess < randomNumber)
    cout <<  "Too low. Try again." << endl;
    else
    cout << "Congratulations! You figured out my number!" << endl;
  } while (guess != randomNumber); //will continue to loop until expression evaluates false
  return 0;
}
