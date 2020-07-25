#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the various ways of Initializing a Vector (Part 2), in CPP  ===== \n\n";

    cout << "Method 1: Initialize a Vector like an Array\n\n";

    //create and initialize a vector
    vector<int> v{1, 2, 3, 4};

    //prining the vector
    cout << "The elements of the first vector are: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\n\n\nMethod 2: Initializing a Vector from an Array\n\n";

    //creating and initializing an array
    int a[] = {11, 22, 33};

    //calculating number of elements in an array
    int n = sizeof(a) / sizeof(a[0]);

    //creating and initializing a vector with the array elements
    vector<int> v1(a, a + n);

    //prining the vector
    cout << "The elements of the second vector are: ";
    for (int i : v1)
    {
        cout << i << " ";
    }

    cout << "\n\n\nMethod 3: Initializing a Vector from another Vector\n\n";

    //creating and initializing the source vector
    vector<int> a1 = {10, 22, 33};

    //creating and initializing a second vector with the elements of the first vector
    vector<int> b(a1.begin(), a1.end());

    //prining the vector
    cout << "The elements of the third vector are: ";
    for (int i : b)
    {
        cout << i << " ";
    }

    cout << "\n\n\n";

    return 0;
}
