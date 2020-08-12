#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Program to return true if duplicate is found
bool containsDuplicate(int n[], int m)
{

    //flag to indicate the presence of duplicate
    int f = 0;

    //Sorting the array to check for duplicates
    sort(n, n + m);

    for (int i = 0; i < m - 1; i++)
    {
        if (n[i] == n[i + 1])
        {
            //if duplicate is found then set the flag to 1 and exit the loop
            f = 1;
            break;
        }
    }

    if (f == 1)
        return true;
    else
        return false;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " ===== Program to check if any duplicates are present in the input array  ===== \n\n";

    int i, n1, n2;

    int a1[] = {2, 3, 1, 4, 5, 2, 8, 9};
    int a2[] = {2, 3, 1, 4, 5, 10, 8, 9};

    bool duplicate1 = false;

    bool duplicate2 = false;

    n1 = sizeof(a1) / sizeof(a1[0]);
    n2 = sizeof(a2) / sizeof(a2[0]);

    cout << "\n\nThe elements of the first input array are :\n\n";

    for (i = 0; i < n1; i++)
    {
        cout << a1[i] << "  ";
    }

    duplicate1 = containsDuplicate(a1, n1);

    if (duplicate1)
        cout << "\n\nThe first input array contains duplicate";
    else
        cout << "\n\nThe first input array does not contain any duplicate";

    cout << "\n\n\n\nThe elements of the second input array are :\n\n";

    for (i = 0; i < n2; i++)
    {
        cout << a2[i] << "  ";
    }

    duplicate2 = containsDuplicate(a2, n2);

    if (duplicate2)
        cout << "\n\nThe second input array contains duplicate";
    else
        cout << "\n\nThe second input array does not contain any duplicate";

    cout << "\n\n\n";

    return 0;
}
