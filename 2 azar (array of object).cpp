//Array of Object
#include<iostream>
using namespace std;

class number{
int x;
public:
void set(int a){
x=a;
}
int get(){
return x;
}
};
int main()
{
number obj[7];
for (int i=0; i<7; i++)
obj[i].set(i);
for (int i=0; i<7; i++)
cout<<"object number "<<i<<" is : "<<obj[i].get()<<endl;

return 0;}
