#include <iostream>
#include<vector>
using namespace std;

//Function prototyping as defined after it is being called.  
// It denotes that the method sumOf() takes two parameters which are pointer to an int and returns int
int sumOf(int *, int *);

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the difference between Call by Value and Call by Reference function call, in CPP  ===== \n\n";

    //variable declaration
    int num1 = 0, num2 = 0, addition=0;

    cout << "Enther the two numbers you want to add : \n\n";
    cin >> num1;
    cin >> num2;

    /*
    Demonstrating Multi-line Commenting:

        Passing the values stored in the variables num1 and num2 as parameter to function sumOf().
        
        The value returned by the function is stored in the variable output
    */


   //It is not always necessary to store the returned value into a variable as it can be directly used as demonstrted below
    cout << "\n\nThe Sum of the two numbers " << num1 << " and " << num2 << ", returned by the function sumOf(), is = " << sumOf(&num1, &num2);

    cout << "\n\n\n";

    return 0;
}


// Defining the function sumOf(a,b) which is called by Passing Values and returns the sum of a and b
int sumOf(int *n1, int *n2)
{
    int sum;
    //Computing the addition of the two values the function is called with
    sum = *n1 + *n2;

    //Returning the addition to the point where this funciton is called from
    return sum;
}