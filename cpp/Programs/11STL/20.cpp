#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of erase() method in a Map, in CPP  ===== \n\n\n";

    cout << "*** The erase(x) method deletes the map element with key as x and returns 1 if found else returns 0. *** \n\n";

    //Map declaration (Map with key and value both as integers)
    map<int, int> m;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Map with key-value pairs of integers in random order."; //Map automatically stores them in increasing order of keys

    //make_pair() is used to insert a key value pair into the map
    m.insert(make_pair(3, 9));
    m.insert(make_pair(2, 4));
    m.insert(make_pair(5, 25));
    m.insert(make_pair(9, 81));
    m.insert(make_pair(1, 1));

    cout << "\n\nThe number of elements in the Map are: " << m.size();

    cout << "\n\nThe elements of the Map m are: ";

    map<int, int>::iterator i;
    int j = 0;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    //Finding the map element with key 5

    j = m.erase(5);

    if (j == 1)
    {
        cout << "\n\nThe Map element with key 5 is deleted.";
    }

    else
    {
        cout << "\n\nThe Map element with key 5 does not exist.";
    }

    cout << "\n\nThe number of elements in the Map becomes: " << m.size();

    cout << "\n\nThe elements of the Map m after the erase operation are:  ";

    j = 0;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    j = m.erase(6);

    if (i != m.end())
    {
        cout << "\n\nThe Map element with key 6 is deleted\n\n";
    }

    else
    {
        cout << "\n\nThe Map element with key 6 does not exist.";
    }

    cout << "\n\n\n";

    return 0;
}
