#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of a Ordered Map, in CPP  ===== \n\n\n\n";

    cout << "*** Each Element of a Map is a key value par. *** \n\n";

    //Map declaration (Map with key and value both as integers)
    map<int,int> m;

    //Filling the elements by using the insert() method.
    cout << "\n\nFilling the Map with key-value pairs of integers in random order."; //Map automatically stores them in increasing order of keys

    //make_pair() is used to insert a key value pair into the map
    m.insert(make_pair(3,9));
    m.insert(make_pair(2,4));
    m.insert(make_pair(5,25));
    m.insert(make_pair(9,81));
    m.insert(make_pair(1,1));


    cout << "\n\nThe number of elements in the Map are: " << m.size();

    cout << "\n\nThe elements of the Map m are: ";
    
    map<int,int>::iterator i;

    for(i=m.begin();i!=m.end();i++)
    {
        cout << "\nSquare of " << i->first << " is "<< i->second;
    }

    //Initializing a map with the elements of another map

    map<int,int> m1(m.begin(),m.end());

    //Printing the copied map
    cout << "\n\nThe elements of the Map m1 are: ";

    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << "\nSquare of " << i->first << " is "<< i->second;
    }

    cout << "\n\n\n";

    return 0;
}
