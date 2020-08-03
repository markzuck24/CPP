#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of erase() method in a Map (Part 2), in CPP  ===== \n\n\n";

    cout << "*** The erase(m.begin(),m.find(x)) method deletes the map element with key less than x. *** \n\n";

    //Map declaration (Map with key and value both as integers)
    map<int, int> m;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Map with key-value pairs of integers in random order."; //Map automatically stores them in increasing order of keys

    //make_pair() is used to insert a key value pair into the map
    m.insert(make_pair(3, 30));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(5, 50));
    m.insert(make_pair(9, 90));
    m.insert(make_pair(1, 10));

    cout << "\n\nThe number of elements in the Map are: " << m.size();

    cout << "\n\nThe elements of the Map m are: ";

    map<int, int>::iterator i;
    int j = 0;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    //Deleting the map elements with key less than 3
    m.erase(m.begin(), m.find(3));

    cout << "\n\nThe number of elements in the Map becomes: " << m.size();

    cout << "\n\nThe elements of the Map m after the erase operation are:  ";

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    cout << "\n\n\n";

    return 0;
}
