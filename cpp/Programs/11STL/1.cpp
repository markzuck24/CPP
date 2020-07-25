#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the various ways of Initializing a Vector (Part 1), in CPP  ===== \n\n";

    cout << "Method 1: Using push_back() method\n\n";

    //create an empty vector
    vector<int> v;

    //insert elements into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //prining the vector
    cout << "The elements of the first vector are: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\n\n\n\n\nMethod 2: Initializing all the elements with a specific value\n\n";

    //creating a vector of size 5 with all values initalized to 10
    vector<int> v1(5, 10);

  //prining the vector
    cout << "The elements of the second vector are: ";
     for (int i : v1)
    {
        cout << i << " ";
    }

    cout << "\n\n\n";

    return 0;
}
