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
    cout << " =====  Program to demonstrate the working of Sets (Part 1), in CPP  ===== \n\n\n\n";

    cout << " ***  Set automatically removes the duplicate elements and also sorts the input in ascending order *** \n\n";



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

    cout << "\n\nAfter deleting the element 54 from the set using the erase() method, it becomes: ";
    s.erase(54);
    show(s);

    cout << "\n\n\n";

    return 0;
}
