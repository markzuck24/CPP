#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Multimap (Part 1), in CPP  ===== \n\n\n";

    cout << " Multimap is similar to map with two additional functionalities: \n1. Multiple elements can have same keys or \n2. Multiple elements can have same key-value pair.\n\n";

    //Multimap declaration (Multimap with key and value both as integers)
    multimap<int, int> m;

    //Filling the elements by using the insert() method.
    cout << "Filling the Map with key-value pairs of integers in random order."; //Map automatically stores them in increasing order of keys

    //make_pair() is used to insert a key value pair into the map
    m.insert(make_pair(3, 30));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(5, 50));
    m.insert(make_pair(9, 90));
    m.insert(make_pair(1, 10));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(3, 60));

    cout << "\n\nThe number of elements in the Multimap are: " << m.size();

    cout << "\n\nThe elements of the Multimap m are: ";

    multimap<int, int>::iterator i;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    //Copying one multimap into another
    multimap<int, int> m1(m.begin(), m.end());

    cout << "\n\nThe elements of the Multimap m1 are: ";

    for (i = m1.begin(); i != m1.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    cout << "\n\n\n";

    return 0;
}
