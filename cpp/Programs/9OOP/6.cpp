#include <iostream>
using namespace std;

//defining the class Addition to overload the method sumOf() to explain the concept of Polymorphism
{

public:
    int sumOf(int n1, int n2)
    {
        cout << "\nPerforming the addition operation on two integers and the value returned is: ";
        return n1 + n2;
    }
    int sumOf(int n1, int n2, int n3)
    {
        cout << "\nPerforming the addition operation on three integers and the value returned is: ";
        return n1 + n2 + n3;
    }
    int sumOf(int n1, int n2, int n3, int n4)
    {
        cout << "\nPerforming the addition operation on four integer values and the value returned is: ";
        return n1 + n2 + n3 + n4;
    }
};

//Defining the main method to access the members of the class
int main()
{
    #include <iostream>
using namespace std;

class Box
{
   public:

      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }

      void setBreadth( double bre )
      {
          breadth = bre;
      }

      void setHeight( double hei )
      {
          height = hei;
      }
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};
// Main function for the program
int main( )
{
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}


    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to explain the concept of Plus Operator Overloading , in CPP  ===== \n\n";

    Addition add; //Default constructor is called- which is not required to be written explicitly

    cout << add.sumOf(3, 5) << "\n\n";
    cout << add.sumOf(3, 5, 10) << "\n\n";
    cout << add.sumOf(3,5,7,10) << "\n\n";

    cout << "\n\nExiting the main() method\n\n\n";

    return 0;
}
