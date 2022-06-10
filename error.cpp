#include<iostream>

#include<math.h>
using namespace std;

class Add {
int c, d;
public:

Add(int a, int b) {
c = a + b;
}
Add(int i){
d= i*i;
cout<<"Multiplection is : "<<d;
}

void display() {
cout << "Sum is:" << c;
}
};

int main() {

int a, b;

cout << "Enter two numbers:";
cin >> a >> b;

Add obj(a, b);
Add obj(10);

obj.display();

return 0;
}
