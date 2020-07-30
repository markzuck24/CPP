#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the set using an iterator
void show(set<int> s)
{
    //declaring an iterator to iterate through the set
    set<int>::iterator i;

    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << "  "; //accessing the elements of the set using * as i stores the address to each element
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of erase() method of STL, in CPP  ===== \n\n\n\n";

    cout << " ***  erase(s.begin(),s.find(x)) methods deletes all the elements of the set from beginning to less than x.  *** \n\n";

    //Set declaration (Set of integers)
    set<int> s;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Set with integers in random order."; //Set automatically stores them in order

    s.insert(5);
    s.insert(39);
    s.insert(64);
    s.insert(82);
    s.insert(35);
    s.insert(54);

    cout << "\n\nThe elements of the Set are: ";
    show(s);

    set<int>::iterator it;

    //Deleting all the elements of the set that are less than 54
    s.erase(s.begin(), s.find(54));

    cout << "\n\nPrinting the elements of the Set that are greater than or equal to 54 : ";

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << " " << *it;
    }

    cout << "\n\n\n";

    return 0;
}
