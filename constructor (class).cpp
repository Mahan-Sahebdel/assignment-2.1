:Conutractor

#include<iostream>
using namespace std;

class prime{
int x, p, i;

public:
prime(int n)
{
x=n;
}

void cal(){
p=1;
for(i=2; i<x/2; i++)
{
if(x%i ==0)
{
p=0;
break;
}
else
p=1;
}
}

void display(){
if(p==1)

cout<<x<<" is Prime";

else
cout<<x<<" is not prime";
}
};

int main(){
int number;
cout<<"Enter a Number: ";
cin>>number;

prime obj(number);

obj.cal();
obj.display();
return 0;
}
