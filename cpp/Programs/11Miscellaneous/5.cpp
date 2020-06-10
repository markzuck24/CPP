#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Switch Case without break statement, in CPP  ===== \n\n";

    //variable to run the Switch case with
    int sw = 1;

    cout << "\n\n***** Entering the Switch case with value 1 ***** \n\n";

    //Logic of Switch case with break statement
    switch (sw)
    {
    case 1:
        cout << "\nInside Case 1\n";
    case 2:
        cout << "\nInside Case 2\n";
    case 3:
        cout << "\nInside Case 3\n";
    case 4:
        cout << "\nInside Case 4\n";
    case 5:
        cout << "\nInside Case 5\n";
    default:
        cout << "\nInside the Default Case\n";
    }

    cout << "\n\n***** Exiting the Switch case ***** \n\n\n";
    return 0;
}
