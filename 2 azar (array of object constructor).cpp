//Array of Object- Cunstractor
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
int main()
{

Test obj[] = { Test(10, 1), Test(20, 2), Test(3, 3) };


for (int i = 0; i < 3; i++) {
obj[i].add();
}

return 0;
}
