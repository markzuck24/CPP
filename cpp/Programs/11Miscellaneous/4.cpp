#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Switch Case with break statement, in CPP  ===== \n\n";

    //variable to store the operation to be performed
    char operation;

    //variable to store the operands
    int n1, n2, result;

    cout << "\nEnter the operation you want to perform: either + or - or * or / or %: ";
    cin >> operation;

    cout << "\n\n\nEnter the two operands you want to perform the operation on: \n";
    cin >> n1 >> n2;

    //Logic of Switch case with break statement
    switch (operation)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    case '%':
        result = n1 % n2;
        break;

    default:
        cout << "\n\nPlease Enter a Valid Operation from the mentioned list";
        break;
    }

    cout << "\n\nResult obtained from the given data is: " << n1 << operation << n2 << " = " << result << "\n\n\n ";
    return 0;
}
