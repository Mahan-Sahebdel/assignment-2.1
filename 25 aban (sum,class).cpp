#include<iostream>
using namespace std;

class calculate{
float x, y;

public:
calculate(){}
calculate(float a){
x=y=a;
}
calculate(float r1, float r2){
x=r1;
y=r2;
}

friend calculate sum(calculate c1, calculate c2){
calculate c3;
c3.x= c1.x + c2.x;
c3.y= c1.y + c2.y;
return c3;
}

friend void display(calculate c){
cout<<"The summation of x is: "<<c.x<<endl;
cout<<"The summation of y is: "<<c.y<<endl;
}
};

int main(){
calculate A(12.7, 30.5);
calculate B(74.2);
calculate C;
C=sum(A, B);
display(C);

return 0;
}
