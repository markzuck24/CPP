#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept erase() method in Multimap (Part 2), in CPP  ===== \n\n\n";

    cout << " In Multimap, the erase(m.begin(), m.find(x)) deletes all the elements with key smaller than key x.\n\n";

    //Multimap declaration (Multimap with key and value both as integers)
    multimap<int, int> m;

    //Filling the elements by using the insert() method.
    cout << "Filling the Multimap with key-value pairs of integers in random order."; //Multimap automatically stores them in increasing order of keys

    //make_pair() is used to insert a key value pair into the Multimap
    m.insert(make_pair(3, 30));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(5, 50));
    m.insert(make_pair(9, 90));
    m.insert(make_pair(1, 10));
    m.insert(make_pair(6, 50));
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

    //Deleting all the elements with key smaller than 5
    m1.erase(m1.begin(), m1.find(5));

    cout << "\n\nThe elements of the Multimap m1 after deleting all the elements with key smaller than as 5 are:\n ";

    for (i = m1.begin(); i != m1.end(); i++)
    {
        cout << "( " << i->first << ", " << i->second << " ) ";
    }

    cout << "\n\n\n";

    return 0;
}
