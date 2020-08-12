#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the unordered set using an iterator
void show(unordered_set<int> s)
{
    //declaring an iterator to iterate through the unordered set
    unordered_set<int>::iterator i;

    for (i = s.begin(); i != s.end(); i++)
    {
        cout << *i << "  "; //accessing the elements of the unordered set using * as i stores the address to each element
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of Unordered Sets (Part 1), in CPP  ===== \n\n\n\n";

    cout << " *** Unordered Set automatically removes the duplicate elements and maintains a random ordering. *** \n\n";

    cout << " *** This random ordering depends on the hash function that is used internally. *** \n\n";

    //Unordered Set declaration (Unordered Set of integers)
    unordered_set<int> s;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Unordered Set with integers in random order."; //Unlike Set, this is not automatically sorted

    s.insert(5);
    s.insert(39);
    s.insert(64);
    s.insert(82);
    s.insert(35);
    s.insert(54);

    cout << "\n\nThe elements of the Unordered Set are: ";
    show(s);

    cout << "\n\nAfter deleting the element 39 from the unordered set using the erase() method, it becomes: ";
    s.erase(39);
    show(s);

    cout << "\n\n\n";

    return 0;
}
