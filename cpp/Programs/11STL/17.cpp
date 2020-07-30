#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the multiset using an iterator
void show(multiset<int> s)
{
    //declaring an iterator to iterate through the multiset
    multiset<int>::iterator i;

    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << "  "; //accessing the elements of the multiset using * as i stores the address to each element
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of a Multiset, in CPP  ===== \n\n\n\n";

    cout << "*** Multisets are similar to set, with an exception that multiple elements can have same values. *** \n\n";

    //Set declaration (Set of integers)
    multiset<int> s;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Multiset with integers in random order."; //Multiset automatically stores them in order

    s.insert(5);
    s.insert(39);
    s.insert(5);
    s.insert(82);
    s.insert(39);
    s.insert(54);

    cout << "\n\nThe number of elements in the Multiset are: " << s.size();

    cout << "\n\nThe elements of the Multiset are: ";
    show(s);

    multiset<int>::iterator it;

    //Deleting all the elements of the set that are less than 54
    s.erase(s.begin(), s.find(54));

    cout << "\n\nAfter deleting all the elements that are less than 54, the Multiset becomes : ";

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << " " << *it;
    }

    cout << "\n\n\n";

    return 0;
}
