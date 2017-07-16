// This is for the dropping lowest score and finding average for the function Chapter 6 assignment.
// Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped.
// It should use the following functions:
// void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.
// void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main, and should be passed the five scores.
// int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine one of the five scores to drop.
// INPUT VALIDATION: DO NOT ACCEPT TEST SCORES LOWER THAN 0 OR HIGHER THAN 100


#include <iostream>
using namespace std;

// function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() {
        int score1, score2, score3, score4, score5;

        // Display program introduction
        cout << "\nThis program calculates the average of five scores.\n";

        // Call getScore function once for each of the five scores
        // cout << "address in main " << &score1 << endl;
        getScore(score1);
        getScore(score2);
        getScore(score3);
        getScore(score4);
        getScore(score5);

        // Call calcAverage and pass the five scores
        calcAverage(score1, score2, score3, score4, score5);

        return 0;

}

void getScore(int &score) {
  // cout << "address in getScore " << &score << endl;
        do
        {
                cout << "Please enter a score between 0 - 100: ";
                cin >> score;

                if (score < 0 || 100 < score ) {
                        cout << "Error! Test score must be greater than 0 and less than 100.";
                }
        } while (score < 0 || 100 < score);

}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
        int lowest; // lowest test score
        double average; // average of the 4 highest scores

        // Call function findLowest
        lowest = findLowest(score1, score2, score3, score4, score5);

        // Caculate average of four highest test scores
        average = (score1 + score2 + score3 + score4 + score5 - lowest)/4;


        // Display average
        cout << "The average of the 4 highest scores is: " << average <<".\n";
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{       // Determine and return lowest test score
        if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
                return score1;
        else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
                return score2;
        else if(score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
                return score3;
        else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
                return score4;
        else
                return score5;
}
