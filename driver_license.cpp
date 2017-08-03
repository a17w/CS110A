#include <iostream>
using namespace std;

char correctAnswers [20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
char studentAnswers [20];
int markedAnswers [20];
double numCorrect = 0;
int main() {

    for(int i = 0; i < 20; i++)
    {
        cout << " Enter answer for # "<< i + 1 << endl;
        do {
        cin >> studentAnswers[i];
        if (studentAnswers[i] >= 'a' && studentAnswers[i] <= 'd')
          studentAnswers[i] = studentAnswers[i] + ('A' - 'a');
        if (!(studentAnswers[i] >= 'A' && studentAnswers[i] <= 'D'))
        cout << "Invalid enter. Please enter A - D."<< endl;
      } while (!(studentAnswers[i] >= 'A' && studentAnswers[i] <= 'D'));
    }

    for (int i = 0; i < 20; i++)
        {
            if (studentAnswers[i]==correctAnswers[i] )
            {
                numCorrect ++;
            }
        }
    if (numCorrect >= 15)
      cout << "You  passed!" << endl;
    else
      cout << "You failed"<< endl;
    cout << "You got "<<numCorrect << "/20  correct" <<endl;
    cout << "You got "<<(20 - numCorrect) << "/20  incorrect" <<endl;
    for (int i = 0; i < 20; i++)
        {
            if (studentAnswers[i]!=correctAnswers[i] )
            {
                cout << " For answer # "<< i + 1 <<" You chose " << studentAnswers[i] << " correct answer is " << correctAnswers[i] << endl;
            }
        }
    return 0;
}
