#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the stack
void show(stack<int> s)
{
    while (!s.empty())
    {
        cout << "  " << s.top(); //printing the topmost element
        s.pop();                 //removing the topmost element to bring next element at the top
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of Stacks, in CPP  ===== \n\n";

    int i;

    //Stack declaration (stack of integers)
    stack<int> s;

    //Filling the elements by using the push() method.
    cout << "Filling the Stack in LIFO order:"; //LIFO= Last In First Out
    for (i = 1; i <= 5; i++)
    {
        s.push(i * 10); //inserting elements to the top
    }

    cout << "\n\nThe top-most element of the Stack is :  " << s.top();

    cout << "\n\nThe size of the Stack is :  " << s.size();

    cout << "\n\nThe elements of the Stack in LIFO order are: ";
    show(s);

    cout << "\n\nAfter deleting the top-most element from the stack, it becomes: ";
    s.pop();
    show(s);

    cout << "\n\n\n";

    return 0;
}
