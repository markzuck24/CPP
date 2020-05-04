#include <iostream>
#include<vector>
using namespace std;




void bubble_sort(vector<int> &a)
{
    int i, j, k, temp;
    for (int i = a.size(); i > 0; i--)
    {
        //Any number of variables can be used within the loop provided the syntax is correct.
        for ( j = 0, k = 1; k < i; j++, k++)
        {
            if (a[j] > a[k])
            {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
}


int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to implement the Bubble sort algo, using Vectors in CPP  ===== \n\n";

    //variable declaration
    int n,i,temp;

    //As we are dealing with the sum, so initializing with 0.
    int sum = 0;


    //taking input from the command line (user)
    cout << " Enter the number of integers you want to add : ";
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

    
    cout << "\n\nSum of the " << n << " numbers entered by the user is : "<< sum << endl;

    cout << "\n\n\n";

    return 0;
}
