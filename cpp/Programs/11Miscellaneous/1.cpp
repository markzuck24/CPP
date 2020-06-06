#include <iostream>
#include<vector>
using namespace std;

//Function prototyping as defined after it is being called
int sumOf(int, int);

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the Pass By Value Function Call, in CPP  ===== \n\n";

    //variable declaration
    int num1, num2, addition=0;

    cout << "Enther the two numbers you want to add : \n\n";
    cin >> num1;
    cin >> num2;

    /*
    Demonstrating Multi-line Commenting:

        Passing the values stored in the variables num1 and num2 as parameter to function sumOf().
        
        The value returned by the function is stored in the variable output
    */

    addition = sumOf(num1, num2);
    cout << "\n\nThe Sum of the two numbers " << num1 << " and " << num2 << ", returned by the function sumOf(), is = " << addition;


    cout << "\n\n\n";

    return 0;
}


// Defining the function sumOf(a,b) which is called by Passing Values and returns the sum of a and b
int sumOf(int n1, int n2)
{
    int sum;
    //Computing the addition of the two values the function is called with
    sum = n1 + n2;

    //Returning the addition to the point where this funciton is called from
    return sum;
}