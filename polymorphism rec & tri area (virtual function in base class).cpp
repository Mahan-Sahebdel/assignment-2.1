#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a , int b  ){
         width = a;
         height = b;
      }
     virtual int area() {
         cout << "Parent class area :" <<endl;
         return  width*height;
      }
};
class Rectangle:  public Shape {
   public:
      Rectangle( int a  , int b ):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a  , int b  ):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return ((width * height) / 2); 
      }
};

// Main function for the program
int main() {
   Shape *p;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   p = &rec;
   
   // call rectangle area.
   cout<<p->area()<<endl;

   // store the address of Triangle
   p = &tri;
   
   // call triangle area.
   cout<<p->area();
   
   
   
   return 0;
}
