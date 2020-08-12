#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";

    cout << " =====  Program to demonstrate the working of an Unordered Map, in CPP  ===== \n\n";

    cout << "*** Each Element of a Map is a key value pair. *** \n\n";

    cout << "*** When two elements having same key are inserted then only the latest copy is stored. *** \n\n";

    cout << "***  An Unordered map internally uses a Hash Table to store the keys. *** \n\n";

    //Unordered Map declaration (Map with key as integer and value as string)
    unordered_map<int, string> m;

    //Filling the elements by using the m[key]=value format.
    cout << "\n\nFilling the Map with key-value pairs using the map[key]=value syntax."; //Unordered Map stores this in a random order

    m[3] = "Three";
    m[4] = "Four";
    m[1] = "One";
    m[20] = "Twenty";
    m[31] = "Thirty One";
    m[3] = "Four";

    cout << "\n\nThe number of elements in the Unordered Map are: " << m.size();

    cout << "\n\nThe elements of the Unordered Map stored using the Hash Table are: \n\n";

    unordered_map<int, string>::iterator i;

    int j = 0;

    for (i = m.begin(); i != m.end(); i++)
    {
        cout << "\n   Key number " << ++j << " is: " << i->first << " and its values is: " << i->second;
    }

    cout << "\n\nNote that only the latest copy with key 3 is stored with value four.";

    cout << "\n\n\n";

    return 0;
}
