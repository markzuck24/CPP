#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the list
void show(list<int> &l)
{
    //Defining an iterator for the list
    list<int>::iterator i;

    for (i = l.begin(); i != l.end(); i++)
    {
        cout << "\t" << *i;
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of Lists (Part 2), in CPP  ===== \n\n";

    int i;

    //List declaration (list of integers)
    list<int> l1, l2;

    //Filling the elements
    cout << "Filling the First list from end\n\n";
    for (i = 0; i < 5; i++)
    {
        l1.push_back(i * 5); //inserting elements from end
    }

    cout << "The elements of the First list are: ";
    show(l1);

    //Filling the elements
    cout << "Filling the Second list from front\n\n";
    for (i = 0; i < 5; i++)
    {
        l2.push_front(i * 10); //inserting elements from front
    }

    cout << "The elements of the Second list are: ";
    show(l2);


    cout << "\n\nList 1 after getting reversed is: ";
    l1.reverse();
    show(l1);

    cout << "\n\nList 2 after getting sorted is: ";
    l2.sort();
    show(l2);

    cout << "\n\n\n";

    return 0;
}
