//Returning Object - Simple Function and friend Function
#include<iostream>
using namespace std;

class complex{
float x;
float y;
public:
void setvalue(float r1 , float r2)
{
x=r1;
y=r2;
}

friend complex sum(complex , complex);
void display(complex);
};

complex sum(complex c1, complex c2)
{
complex c3;
c3.x = c1.x + c2.x;
c3.y = c1.y + c2.y;
return c3;
}

void complex :: display(complex c)
{
cout<< c.x << " + "<<c.y<<endl;
}

int main(){
complex A, B, C;

A.setvalue(12.4 , 78.2);
B.setvalue(55 , 94.5);

C= sum(A , B);

cout<<"First Object - A = ";
A.display(A);
cout<<"Second Object - B = ";
B.display(B);
cout<<"Sum of Object's Value - C = ";
C.display(C);

return 0;
}
