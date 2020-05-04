#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Average of n numbers entered by the user ===== \n\n";

    //variable declaration
    int n,i,temp;

    //As we are dealing with the sum, so initializing with 0.
    double sum = 0;

    //As the average of integers can be a fractional value.
    double average = 0;


    //taking input from the command line (user)
    cout << " Enter the number of integers you want to find the average of : ";
    cin >> n;
    cout << "\n\n";


    //taking n numbers as input from the user and adding them to find the final sum
    for(i=0;i<n;i++)
    {
        cout << "Enter number" << i+1 << " :  ";
        cin >> temp;
        
        //add each number to the sum of all the previous numbers to find the final sum
        sum += temp;
    }

    //Finding the average of the entered numbers (atleast one of the varialbe on the RHS has to be double for average to be double)
    average = sum / n;

    
    cout << "\n\n The Sum of the " << n << " numbers entered by the user is : "<< sum << endl;

    cout << "\n\nThe Average of the " << n << " numbers entered by the user is : "<< average << endl;


    cout << "\n\n\n";

    return 0;
}
