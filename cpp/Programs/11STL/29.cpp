#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Returns true if first string is of longer length than second
bool cmp(string x, string y)
{
    int n = x.length();
    int m = y.length();

    if (n > m)
        return true;
    else
        return false;
}

//Function to print the elements of the unordered set using an iterator
void show(unordered_set<string> s)
{
    //declaring an iterator to iterate through the unordered set
    unordered_set<string>::iterator i;

    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << "     "; //accessing the elements of the unordered set using * as i stores the address to each element
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the Sorting Strings on the basis of length, in CPP  ===== \n\n\n\n";

    cout << " *** Unordered Set automatically removes the duplicate elements and maintains a random ordering. *** \n\n";

    cout << " *** This random ordering depends on the hash function that is used internally. *** \n\n";

    cout << " *** Unordered set can be sorted by copying its elements to a Vector. *** \n\n";

    //Unordered Set declaration (Unordered Set of strings)
    unordered_set<string> s;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Unordered Set with strings in random order."; //Unlike Set, this is not automatically sorted

    s.insert("Study");
    s.insert("Tonight");
    s.insert("Aditya");
    s.insert("Abhishek");
    s.insert("C++");
    s.insert("Hi");

    cout << "\n\nThe elements of the Unordered Set before sorting are:\n ";
    show(s);

    //Declaring a vector and initializing it with the elements of the unordered set
    vector<string> v(s.begin(), s.end());

    //Sorting the vector elements in descending order of their length using a custom comparator
    sort(v.begin(), v.end(), cmp);

    cout << "\n\nThe elements of the Unordered Set after sorting in descending Order of their length using a custom comparator are: \n";

    //declaring an iterator to iterate through the vector
    vector<string>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "     "; //accessing the elements of the vector using * as i stores the address to each element
    }

    cout << "\n\n\n";

    return 0;
}
