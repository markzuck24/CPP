#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> &m)
{
    int i;
    int n = m.size();
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (m[i] < m[n - 1] && m[i] < m[1])
                break;
        }
        else
        {
            if (m[i] < m[i - 1] && m[i] < m[(i + 1) % n])
                break;
        }
    }

    return m[i % n];
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " ===== Program to find the Minimum element in a rotated Sorted Vector, in CPP  ===== \n\n\n";

    cout << " ===== Logic: The minimum element will have larger number on both right and left of it.   ===== \n\n\n";

    //initializing vector with the following elements
    vector<int> v = {4, 5, 6, 7, 1, 3, 2};

    int n = v.size();

    int mini = 0;

    cout << "The elements of the given vector is : ";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }

    mini = findMin(v);

    cout << "\n\nThe Minimum element in the given vector is: " << mini;

    cout << "\n\n\n";

    return 0;
}
