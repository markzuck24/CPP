#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the Priority Queue
void show(priority_queue<int> q)
{
    //Copying the Priority Queue into another to maintain the original Priority Queue
    priority_queue<int> pq = q;

    while(!pq.empty())
    {
        cout << "\t" << pq.top();//printing the top most element
        pq.pop();//deleting the top most element to move to the next
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the Implementation of Priority Queue, in CPP  ===== \n\n";

    int i;

    //Declaring a Priority Queue of integers
    //Note: by default the priority queue is Max heap in c++
    priority_queue<int> q;

    //Filling the elements
    cout << "Inserting elements into the Priority Queue\n\n";
    for (i = 1; i < 6; i++)
    {
        q.push(i*10);
    }

    cout << "The Priority Queue is: ";
    show(q);

    
    cout << "\n\nThe number of elements in the Priority Queue are : " << q.size();;
    


    cout << "\n\nThe first element or the element with the highest priority is: " << q.top();;
    
    

    cout << "\n\nAfter Deleting the top most element or the highest priority element from the Priority Queue, it becomes: ";
    q.pop();
    show(q);

    cout << "\n\n\n";

    return 0;
}
