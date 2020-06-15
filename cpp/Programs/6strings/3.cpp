#include <iostream>
#include<stdio.h>

//This header file is used to make use of the system defined String methods.
#include <string.h>

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Determine whether String is Palindrome or not, in CPP  ===== \n\n";

    //String Variable Declaration
    std::string s1,s2;

    cout << "\n\nEnter the String you want to check : ";
    getline(std::cin ,s1);

    //Copying the entered string into another variable using strcpy() method
    strncpy(s2,s1);


    //Reversing the String s2 to get the reverse of the entered string
    str(s2);

    cout << "\nEnter the second String without any space : ";
    cin >> s2;

    // cout << "\n\nThe two individual Strings before Concatenation are :\n\n";
    // cout << "String1 = " << s1 << " and its lenght is " << s1.size() << "\n";
    // cout << "String2 = " << s2 << " and its lenght is " << s2.size() << "\n\n";

    // //Performing Concatenation of two strings using the + operator in CPP
    // s3 = s1 + s2;

    // cout << "\n\nThe resulting string after the Concatenation of the two strings is :\n\n";
    // cout << "String3 = String1 + String2\n";
    // cout << "String3 = " << s3 << " and its lenght is " << s3.size() << "\n\n";

    cout << "\nNote: Length of String3 is sum of the individual lengths of both the strings.";

    cout << "\n\n";

    return 0;
}
