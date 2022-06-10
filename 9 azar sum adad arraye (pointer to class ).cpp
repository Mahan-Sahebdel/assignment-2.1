#include<iostream>
using namespace std;

int SIZE;
class sum {
public:
float x[3];
void getdata () {
for(int i=0;i<3;i++)
cin>>x[i];
}
void add () {
float s=0;
for(int i=0;i<3;i++)
s=(s+x[i]);
cout<< s;
}
};

int main () {
float a[3];
sum *p;
sum obj;
p=&obj;

// float sum ::*ptr=&sum::x[3];
// obj.getdata();
p->getdata();
p->add();

}
