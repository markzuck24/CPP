#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Returns true if x is smaller than y
bool cmp(pair<int, int> x, pair<int, int> y)
{

    if (x.first != y.first)
        return x.first < y.first; //return the one with smaller first element
    else
        return x.second < y.second; //if first element is equal then return the one with smaller second element
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate Custom Sorting of a Pair Template, in CPP  ===== \n\n";

    cout << "\n\nDeclaring a Vector and Filling it with integers.\n\n";

    //create an empty vector of pair
    vector<pair<int, int>> v;

    //insert elements into the vector
    v.push_back(make_pair(1, 5));
    v.push_back(make_pair(1, 3));
    v.push_back(make_pair(2, 6));
    v.push_back(make_pair(2, 4));
    v.push_back(make_pair(5, 24));

    //prining the vector of pairs
    cout << "Printing the Vector or Pairs: \n";

    int n = v.size();

    //Printing the vector
    for (int i = 0; i < n; i++)
    {
        cout << "\nPair is: " << v[i].first << " and " << v[i].second; //accessing the pair elements
    }

    cout << "\n\n\n--- Calling the Custom Sort Method ---";
    //Sorting the vector in ascending order of the pair
    sort(v.begin(), v.end(), cmp);

    cout << "\n\nThe elements of the Vector after Sorting are:\n ";

    //prining the Sorted vector
    for (int i = 0; i < n; i++)
    {
        cout << "\nPair is: " << v[i].first << " and " << v[i].second; //accessing the pair elements
    }

    cout << "\n\n\n";

    return 0;
}
