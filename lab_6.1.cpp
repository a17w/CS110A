#include <iostream>
using namespace std;

/*****     main     *****/
void printMessage();
int tripleIt(int someNum);

/*****     main     *****/
int main()
{xc
        int value = 2;

        cout << "Hello from main.\n";
        printMessage();

        cout << "\nValue returned by tripleIt is "
             << tripleIt(value) << endl;
        cout << "In main value now is "
             << value << endl << endl;

        value = tripleIt(value);
        cout << "In main value now is "
             << value << endl;

        value = tripleIt(value);
        cout << "In main value now is "
             << value << endl << endl;

        cout << "Goodbye from main.\n";
        return 0;
}

/*****    printMessage    *****/
void printMessage()
{
        cout << "Hello from PrintMessage.\n";
}

/*****    tripleIt    *****/
int tripleIt(int someNum)
{
        return someNum * someNum * someNum;
}
