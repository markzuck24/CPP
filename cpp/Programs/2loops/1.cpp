#include <iostream>

using namespace std;

int main()
{

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to understand the break keyword ===== \n\n";

    // Local variable declaration and initialization:
    int n = 10;

    // do loop execution
    do
    {
        cout << "Value of variable n is : " << n << endl;

        n = n + 1;

        if (n == 15)
        {
            // terminate the loop and execute the next statement following it.

            cout << "\n\nExecuting the break statement and terminating the loop.\n\n";
            break;
        }
    } while (n < 20);

    cout << "The value at which the loop got terminated is : " << n << "\n\n\n";

    return 0;
}