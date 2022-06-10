#include<iostream>
using namespace std;

class Test {
int x, y;

public:

Test(int cx, int cy)
{
x = cx;
y = cy;
}

void add() {
cout << x + y << endl;
}
};
int main() {
cout<<"please enter 3sets of two by two numbers";
int a[6];
for (int i=0;i<6;i++) {
cin>>a[i];
}
//for (int i=0;i<6;i=i+2)
Test obj[] = { Test(a[0], a[1]), Test(a[2], a[3]), Test(a[4], a[5]) };


for (int i = 0; i < 3; i++) {
cout<<"sumation of set"<<i+1<<" ";
obj[i].add();
cout<<endl;
}

return 0;
}
