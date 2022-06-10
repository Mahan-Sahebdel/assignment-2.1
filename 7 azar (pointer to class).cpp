//Pointer to Class
#include<iostream>
using namespace std;

class Base {
public:
int x;

void show() {
cout << "Base Class:" << endl <<
"Data members of Base Class: " << x << endl;
}
};

int main() {
Base *ptr;
Base obj;
ptr = &obj;

ptr -> x = 100;
ptr -> show();
return 0;
}
