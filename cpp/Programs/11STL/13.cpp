#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of a Pair Template in STL, in CPP  ===== \n\n";

    cout << "\n\nDeclaring a Vector and Filling it with pair of two integers.\n\n";

    //create an empty vector of pair
    vector<pair<int, int>> v;

    //insert elements into the vector
    v.push_back(make_pair(8, 64));
    v.push_back(make_pair(1, 1));
    v.push_back(make_pair(3, 6));
    v.push_back(make_pair(2, 4));
    v.push_back(make_pair(5, 25));

    //prining the vector of pairs
    cout << "Printing the Vector of Pairs: \n";

    int n = v.size();

    //Printing the vector
    for (int i = 0; i < n; i++)
    {
        cout << "\nSquare of " << v[i].first << " is " << v[i].second; //accessing the pair elements
    }

    //Sorting the vector in ascending order - by default on the basis of first element of the pair
    sort(v.begin(), v.end());

    cout << "\n\n\n\nThe elements of the Vector after Sorting are:\n ";

    //prining the Sorted vector
    for (int i = 0; i < n; i++)
    {
        cout << "\nSquare of " << v[i].first << " is " << v[i].second; //accessing the pair elements
    }

    cout << "\n\n\n";

    return 0;
}
