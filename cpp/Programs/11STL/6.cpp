#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the elements of the Min Heap
void show(priority_queue<int, vector<int>, greater<int>> q)
{
    //Copying the Priority Queue into another to maintain the original Priority Queue
    priority_queue<int, vector<int>, greater<int>> mh = q;

    while (!mh.empty())
    {
        cout << "\t" << mh.top(); //printing the top most element
        mh.pop();                 //deleting the top most element to move to the next
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the Implementation of Min Heap using a Priority Queue, in CPP  ===== \n\n";

    int i;

    /* Declaring a Priority Queue of integers
    Note: by default the priority queue is Max heap in c++ : priority_queue<int> q
    To create a Min heap, follow the below declaration of the Priority Queue
    */
    priority_queue<int, vector<int>, greater<int>> minHeap;

    //Filling the elements into the Priority Queue
    cout << "=====  Inserting elements into the Priority Queue  ====\n\n";
    for (i = 1; i < 6; i++)
    {
        minHeap.push(i * 20);
    }

    cout << "The number of elements in the Min Heap are : " << minHeap.size();
    ;

    cout << "\n\nThe first element or the element with the highest priority is: " << minHeap.top();
    ;

    cout << "\n\nThe elements of the Min Heap are: ";
    show(minHeap);

    cout << "\n\nAfter Deleting the first or the smallest element from the Min Heap, it becomes: ";
    minHeap.pop();
    show(minHeap);

    cout << "\n\nThe number of elements in the Min Heap after deleting the smallest element are : " << minHeap.size();
    ;

    cout << "\n\n\n";

    return 0;
}
