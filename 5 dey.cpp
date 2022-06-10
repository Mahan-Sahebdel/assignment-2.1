#include <iostream>
using namespace std;
class base {
public:
void fun_1() { cout << "Fun_1 in base\n"; }
virtual void fun_2() { cout << "Fun_2 in base\n"; }
virtual void fun_3() { cout << "Fun-3 in base \n"; }
virtual void fun_4() { cout << "Fun-4 in base \n"; }
};

class derived : public base {
public:
void fun_1() { cout << "Fun_1 in D\n"; }
void fun_2() { cout << "Fun_2 in D\n"; }
void fun_4(int x) { cout << "Fun_4 in D\n"; }
};

int main()
{
base *p;
derived obj1;
p = &obj1;

p->fun_1();

p->fun_2();

p->fun_3();

p->fun_4();

 //p->fun_4(x);
}
