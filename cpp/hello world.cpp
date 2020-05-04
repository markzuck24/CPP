#include<iostream>
using namespace std;

int main()
{
	cout << "Hello World! \n Welcome to Studytonight!!\n\n";

	return 0;
}


/*

Explanation:

Let's break down the parts of the code for better understanding.

(1) #include<iostream>
The number sign (#) at the beginning of a line targets the compiler's pre-processor.
So, in the above case, #include tells the pre-processor to include the <iostream> header.

The <iostream> header defines the required libraries required to take the input and output data.

(2) using namespace std

This tells the compiler to use the standard (std) namespace, which includes features of the C++ Standard Library.

(3) int main()
Similar to any other programming language, in C++, the execution of the program begins with the main function: int main()


(4) cout << "Hello World! \n Welcome to Studytonight!!\n\n"

In c++, the streams defined within the iostream header, are used to for the input and output operations.


cout << is used to display output to the screen. (similar to the printf statement in C)
cin >> is used to take input from the terminal. (similar to the scanf statement in C)


(5) return 0
The main method has int as it's return type. Hence, we need to return 0 to terminate the program.

*/
