#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void showMultimap(unordered_multimap<int, string> mm)
{
    unordered_multimap<int, string>::iterator i;
    int j = 0;

    for (i = mm.begin(); i != mm.end(); i++)
    {
        cout << " Pair #" << ++j << ":( " << i->first << ", " << i->second << " )\n";
    }
}



int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Unordered Multimap, in CPP  ===== \n\n\n";

    cout << " Multimap is similar to map with two additional functionalities: \n1. Multiple elements can have same keys or \n2. Multiple elements can have same key-value pair.\n\n";

    cout << "**** Unordered Multimap internally uses a Hash table to order the elements. ****\n\n";

    //Unordered Multimap declaration (Unordered Multimap with key as integer and value as string)
    unordered_multimap<int, string> m;

    //Filling the elements by using the insert() method.
    cout << "Filling the Unordered Multimap with key-value pairs in random order."; //Unordered Multimap stores them in random order

    //make_pair() is used to insert a key value pair into the multimap: similar to map[key]=value format
    m.insert(make_pair(3, "Three"));
    m.insert(make_pair(20, "Twenty"));
    m.insert(make_pair(5, "five"));
    m.insert(make_pair(9, "ninety"));
    m.insert(make_pair(1, "one"));
    m.insert(make_pair(3, "three")); //duplicate key with different value
    m.insert(make_pair(3, "Three")); //the duplicate key-value pair

    cout << "\n\nThe number of elements in the Unordered Multimap are: " << m.size();

    cout << "\n\nThe elements of the Unordered Multimap m are:\n\n";
    showMultimap(m);

    cout << "\n\n\n";

    return 0;
}
