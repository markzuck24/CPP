#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of upper_bound() method of STL, in CPP  ===== \n\n";

    cout << "\n\nDeclaring a Vector and Filling it with integers.\n\n";

    //create an empty vector
    vector<int> v;

    //insert elements into the vector
    v.push_back(10);
    v.push_back(12);
    v.push_back(35);
    v.push_back(65);
    v.push_back(21);
    v.push_back(90);

    //prining the vector
    cout << "The elements of the Vector are: ";

    vector<int>::iterator it;

    //Printing the elements using an iterator
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    //Sorting the vector in ascending order
    sort(v.begin(), v.end());

    //prining the Sorted vector
    cout << "\n\nThe elements of the Vector after Sorting are: ";

    //Another way of printing the elements of a vector
    for (int i : v)
    {
        cout << i << " ";
    }

    vector<int>::iterator up;

    up = upper_bound(v.begin(), v.end(), 35);

    cout << "\n\nupper_bound returns an iterator pointing to the first element which has a value greater than the given value.";

    cout << "\n\nThe index (starting from 0) of the upper_bound of 35 is: " << (up - v.begin()) << '\n';

    cout << "\n\nNote that as per the definition, it only considers the numbers greater than it and not itself.\n";

    cout << "\n\n\n";

    return 0;
}
